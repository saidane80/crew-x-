#include "observateur.h"
#include <stdio.h>
#include <stdlib.h>

int ajouter ( char *filename , observateur obs)
{
 FILE*f=fopen(filename, "a");
 if (f!=NULL)
  {
   fprintf(f,"%s %s %s  %d %d %s %s %s %s \n",obs.nom,obs.prenom,obs.genre ,obs.CIN ,obs.age,obs.profession,obs.gouvernerat,obs.observateurs,obs.ID);
       fclose(f);
       return 1;
  }
 else return 0 ;
}
int modifier(char * filename, int id, observateur nouv )
{
    int tr=0;
    observateur obs;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %s  %d %d %s %s %s \n",obs.ID,obs.nom,obs.prenom,obs.genre ,&obs.CIN,&obs.age,obs.profession,obs.gouvernerat,obs.observateurs)!=EOF)
        {
            if(atoi(obs.ID)==id)
            {
                fprintf(f2,"%s %s %s %s  %d %d %s %s %s \n",nouv.ID,nouv.nom,nouv.prenom,nouv.genre,nouv.CIN,nouv.age,nouv.profession,nouv.gouvernerat,nouv.observateurs);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %s %s %d %d %s %s %s \n",obs.ID,obs.nom,obs.prenom,obs.genre ,obs.CIN,obs.age,obs.profession,obs.gouvernerat,obs.observateurs);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
    observateur obs;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %d %d %s %s %s \n",obs.ID,obs.nom,obs.prenom,obs.genre ,&obs.CIN,&obs.age,obs.profession,obs.gouvernerat,obs.observateurs)!=EOF)
        {
            if(atoi(obs.ID)==id)
                tr=1;
            else
                fprintf(f2,"%s %s %s %s %d %d %s %s %s \n",obs.ID,obs.nom,obs.prenom,obs.genre ,obs.CIN,obs.age,obs.profession,obs.gouvernerat,obs.observateurs);
        }
    }
    fclose(f);
    fclose(f2);
