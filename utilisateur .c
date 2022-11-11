#include "utilisateur.h"
#include<stdio.h>
#include<stdlib.h>

int ajouter(char * filename ,utilisateur u )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %s %s %s %d %d %d\n",u.ID,u.nom,u.prenom,u.adresse,u.date_naissance,u.choix_liste,u.num_bureauvote,u.cin,u.code_postal);
         fclose(f);
         return 1;
    }
    else return 0;
}


int modifier(char * filename, int id, utilisateur nouv)
{   int tr=0;
    utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("nouv.txt", "w");
    if(f==NULL || f2==NULL)
    {
while(fscanf(f,"%s %s %s %s %s %s %d %d %d\n",u.ID,u.nom,u.prenom,u.adresse,u.date_naissance,u.choix_liste,&u.num_bureauvote,&u.cin,&u.code_postal)!=EOF)
{
    if(atoi(u.ID)==id)
      {  fprintf(f2,"%s %s %s %s %s %s %d %d %d\n",nouv.ID,nouv.nom,nouv.prenom,nouv.adresse,nouv.date_naissance,nouv.choix_liste,nouv.num_bureauvote,nouv.cin,nouv.code_postal);
	tr=1;
       }
    else
      fprintf(f2,"%s %s %s %s %s %s %d %d %d\n",u.ID,u.nom,u.prenom,u.adresse,u.date_naissance,u.choix_liste,u.num_bureauvote,u
.cin,u.code_postal);

}
}
        fclose(f);
        fclose(f2);
	remove(filename);
	rename("nouv.txt", filename);
        return tr;
    
  
}
