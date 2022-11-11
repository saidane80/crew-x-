
#include <stdio.h>
#include <string.h>
#include "utilisateur.h"

int main()
{
utilisateur  u1={"154654jft","ayoub","fk","nabeul","09/07/2002","mahmoud",123,256781,8000};
//utilisateur  u2={"rih55462","ayoub","fk","nabeul","09/07/2002","mahmoud",123,256781,8000};

int x;
x=ajouter("user.txt",u1);

if(x==1)
  printf("\n Ajout de user avec succés");
else 
  printf("\n echec d ajout");

/*x=modifier("utilisateur.txt",2238hf22,u1);
if (x==1)
 printf("\nModification d'utilisateur avec succés");
else
 printf("\nechec modification")
x=supprimer("user.txt",2);
if(x==1)
 printf("\nSuppression de user avec succés");
else
 printf("\nechec Suppression");
x=chercher("utilisateur.txt",u1);*/


if(atoi(u1.ID)==-1)
  printf("introuvable");
else
  printf("existe")
return 0;
   
}
