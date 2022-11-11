# crew-x-
#include <stdio.h>
#include <string.h>
#include"election.h"


int main()
{
	Election e1={12699108,3000,10,02,05,2022,"tunis"},e2={12699105,4000,20,15,03,2022,"Ariana"},e3={14569870,5070,23,20,03,2022,"Manouba"};
	int x=ajouter("election.txt",e1 );
	
	if(x==1)
        printf("\najout de election avec succés");
      else printf("\nechec ajout");
	x=modifier("election.txt",12699108,e2);

      if(x==1)
        printf("\nModification de election avec succés");
       else printf("\nechec Modification");
	x=supprimer("election.txt",12699101 );
    if(x==1)
        printf("\nSuppression de election avec succés");
    else printf("\nechec Suppression");
    e3=chercher("election.txt",12699105 );
    if(e3.identifiant==-1)
        printf("\nintrouvable");
    return 0;
}
