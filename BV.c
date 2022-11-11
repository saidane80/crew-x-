#include "BV.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ajouter (char * file , BV b)
{
  FILE * f=fopen(file, "a");
  if (f!=NULL)
    { fprintf(f, "%s %d %d %s %d %d %s %s %s\n", b.ID, b.co, b.ce, b.adresse, b.nb_salle, b.num_telephone, b.email, b.ID_agent_bv, b.etat_salle);
      fclose(f);
      return 1;
    }
else return 0;
}

int modifier(char * file, int id, BV nouv)
{
int tr=0;
BV b;
FILE * f=fopen(file, "r");
FILE * f2=fopen ("nouv.txt", "w");
if (f!=NULL && f2!=NULL)
{ 
while (fscanf(f,"%s %d %d %s %d %d %s %s %s\n", b.ID, &b.co, &b.ce, b.adresse, &b.nb_salle, &b.num_telephone, b.email, b.ID_agent_bv, b.etat_salle)!=EOF);
{
if(atoi(b.ID)==id)
{ fprintf(f2, "%s %d %d %s %d %d %s %s %s\n", nouv.ID, nouv.co, nouv.ce, nouv.adresse, nouv.nb_salle, nouv.num_telephone, nouv.email, nouv.ID_agent_bv, nouv.etat_salle);
tr=1;
}
else
fprintf(f2, "%s %d %d %s %d %d %s %s %s\n", b.ID, b.co, b.ce, b.adresse, b.nb_salle, b.num_telephone, b.email, b.ID_agent_bv, b.etat_salle);
}
}
fclose(f);
fclose(f2);
remove(file);
rename("nouv.txt", file);
return tr;
}

int supprimer(char * file, int id)
{
int tr =0;
BV b;
FILE * f=fopen(file,"r");
FILE * f2=fopen("nouv.txt", "w");
if(f!=NULL && f2!=NULL)
{
while (fscanf(f,"%s %d %d %s %d %d %s %s %s\n", b.ID, &b.co, &b.ce, b.adresse, &b.nb_salle, &b.num_telephone, b.email, b.ID_agent_bv, b.etat_salle)!=EOF);
 {
if(atoi(b.ID)==id)
tr=1;
else
fprintf(f2, "%s %d %d %s %d %d %s %s %s\n",b.ID, b.co, b.ce, b.adresse, b.nb_salle, b.num_telephone, b.email, b.ID_agent_bv, b.etat_salle);
 }
}
fclose(f);
fclose(f2);
remove(file);
rename("nouv.txt", file);
return tr;
}

 int recherche(char *file, int id)
{
BV b;
int tr;
FILE * f=fopen(file, "r");
if(f!=NULL)
{
 while ((tr==0) && (fscanf(f,"%s %d %d %s %d %d %s %s %s\n", b.ID, &b.co, &b.ce, b.adresse, &b.nb_salle, &b.num_telephone, b.email, b.ID_agent_bv, b.etat_salle)!=EOF)) ;
  { 
if(atoi(b.ID)==id)
tr=1;
  }
}
fclose(f);

if(tr==0)
  strcpy (b.ID,"-1");
return 0;
}
