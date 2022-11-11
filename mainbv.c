#include <stdio.h>
#include <string.h>
#include "BV.h"

int main()
{ 

BV b1={"2d3hfhgf",265,23,"gabes",12,25687412,"iyugjhj@gmail.com","457546gg", "disponible"};
//b2={"215456kj",24,20,"hjkhjgkhi",25,25000123,"kkhuyh@gmail.com","12354jh", "nondisponible"},

int x;
/*x=ajouter("BV.txt", b1);

if (x==1)
printf("\nAjout de bureau de vote aves succés");
else printf("\nEchec ajout");*/

x=modifier("BV.txt",1,b2);
if(x==1)
printf("\nModification de bureau de vote avec succés");
else printf("\nEchec Modification");

/*x=supprimer("BV.txt", 1);
if(x==1)
printf("\nSuppression de bureau de vote avec succés");
else printf("\nEchec Suppression");

x=rechercher ("BV.txt",1,b3);*/
if (atoi(b1.ID)==1)
  printf("introuvable");
else 
printf("existe");

return 0;

}
