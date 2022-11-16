# crew-x-
#include "election.h"
#include <string.h>

int ajouter(char * filename, Election e )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %d %d %d %d %d %s\n",e.identifiant,e.nombre_habitant,e.nombre_conseillers,e.D.jour,e.D.mois,e.D.annee,e.municipalite);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, char id[], Election nouv )
{
    int tr=0;
    Election e;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %d %d %d %d %d %s\n",e.identifiant,&e.nombre_habitant,&e.nombre_conseillers,&e.D.jour,&e.D.mois,&e.D.annee,e.municipalite)!=EOF)
        {
            if(strcmp(e.identifiant,id)== 0)
            {
                fprintf(f2,"%s %d %d %d %d %d %s\n",nouv.identifiant,nouv.nombre_habitant,nouv.nombre_conseillers,nouv.D.jour,nouv.D.mois,nouv.D.annee,nouv.municipalite);
                tr=1;
            }
            else
                fprintf(f2,"%s %d %d %d %d %d %s\n",e.identifiant,e.nombre_habitant,e.nombre_conseillers,e.D.jour,e.D.mois,e.D.annee,e.municipalite);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, char id[])
{
    int tr=0;
    Election e;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %d %d %d %d %d %s\n",e.identifiant,&e.nombre_habitant,&e.nombre_conseillers,&e.D.jour,&e.D.mois,&e.D.annee,e.municipalite)!=EOF)
        {
            if(strcmp(e.identifiant,id)== 0)
                tr=1;
            else
                fprintf(f2,"%s %d %d %d %d %d %s\n",e.identifiant,e.nombre_habitant,e.nombre_conseillers,e.D.jour,e.D.mois,e.D.annee,e.municipalite);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
Election chercher(char * filename, char id[])
{
    Election e;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"%s %d %d %d %d %d %s\n",e.identifiant,&e.nombre_habitant,&e.nombre_conseillers,&e.D.jour,&e.D.mois,&e.D.annee,e.municipalite)!=EOF)
        {
            if(strcmp(e.identifiant,id)== 0)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        strcpy(e.identifiant,"-1");
    return e;

}


