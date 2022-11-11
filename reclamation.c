# crew-x-
#include"rec.h"
int ajouter (char * file ,Reclamation R)
{
    FILE * f= fopen(file,"a+");
    if (f!=NULL)
    {
        fprintf(f,"%d %d %d %s %s %s %s %s /n",R.Date.jour,R.Date.mois,R.Date.annee,R.id,R.description,R.type,R.bureau_de_vote);
        fclose(f);
        return 1;

    }
    else return 0 ;
}

int modifier (char * file ,char id,Reclamation nouv)
{Date D ;
    int T=0;
    Reclamation R;
    FILE * f=fopen(file,"r");
    FILE * f_nv=fopen("nouv.txt","w");
    if(f!=NULL && f_nv!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %s %s %s %s /n",&R.Date.jour,&R.Date.mois,&R.Date.annee,R.id,R.description,R.type,R.bureau_de_vote)!=EOF)
        {
            if (strcmp(id,R.id)==0)
            {
                fprintf(f_nv,"%d %d %d %s %s %s %s %s /n",nouv.Date.jour,nouv.Date.mois,nouv.Date.annee,nouv.id,nouv.description,nouv.type,nouv.bureau_de_vote);
                    T=1;
            }
            else
                fprintf(f_nv,f,"%d %d %d %s %s %s %s %s /n",R.Date.jour,R.Date.mois,R.Date.annee,R.id,R.description,R.type,R.bureau_de_vote);
        }
    }
    fclose(f);
    fclose(f_nv);
    remove (file);
    rename("nouv.txt",file);
    return T;
}

int supprimer(char * file,char id)
{
    Date D ;
    int T=0;
    Reclamation R;
    FILE * f=fopen(file,"r");
    FILE * f_nv=fopen("nouv.txt","w");
    if (f!=NULL && f_nv!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %s %s %s %s /n",&R.Date.jour,&R.Date.mois,&R.Date.annee,R.id,R.description,R.type,R.bureau_de_vote)!=EOF)
        {
            if (strcmp(id,R.id)==0)
                T=1;
            else
                fprintf(f_nv,"%d %d %d %s %s %s %s %s /n",R.Date.jour,R.Date.mois,R.Date.annee,R.id,R.description,R.type,R.bureau_de_vote);
}

Reclamation chercher (char * file,char id) //fonction_de_recherche
{
    int T ;
    Reclamation R;
FILE * f=fopen(file,"r");
if (f!=NULL)
{
while (T==0 && fscanf(f,"%d %d %d %s %s %s %s %s /n",&R.Date.jour,&R.Date.mois,&R.Date.annee,R.id,R.description,R.type,R.bureau_de_vote)!=EOF);
{
    if(strcmp(id,R.id)==0)

        T=1;
}
fclose(f);
return R ;
}
}
