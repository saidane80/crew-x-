#include "listes.h"

int ajouter(char * filename, liste  le )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s\n", le.id, le.orientation, le.idt);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id,liste nouv )
{
    int tr=0;
    liste le;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s\n",&le.id,le.orientation,le.idt)!=EOF)
        {
            if(le.id== id)
            {
                fprintf(f2,"%d %s %s\n",nouv.id,nouv.orientation,nouv.idt);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s\n",le.id,le.orientation,le.idt);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
