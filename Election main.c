# crew-x-
#include <stdio.h>
#include <string.h>
#include"election.h"


int main()
{
	Election e1={"abc123",3000,10,02,05,2022,"tunis"},e2={"efg456",4000,20,15,03,2022,"Ariana"},e3={"rtd789",5070,23,20,03,2022,"Manouba"},e4;
	int x=ajouter("election.txt",e1 );

	if(x==1)
        printf("\najout de election avec succés");
      else printf("\nechec ajout");
         x=ajouter("election.txt",e3 );

	if(x==1)
        printf("\najout de election avec succés");
      else printf("\nechec ajout");
	x=modifier("election.txt","abc123",e2);

      if(x==1)
        printf("\nModification de election avec succés");
       else printf("\nechec Modification");
	x=supprimer("election.txt","rtd789" );
    if(x==1)
        printf("\nSuppression de election avec succés");
    else printf("\nechec Suppression");
    e4=chercher("election.txt","330" );
    if(strcmp(e4.identifiant,"-1")==0)
        printf("\nintrouvable");
    return 0;
}
