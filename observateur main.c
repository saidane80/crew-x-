#include <stdio.h>
#include <string.h>
#include"observateur.h"

int main()
{
    observateur obs1= {21, 128428,"rouba","souidi","journaliste","2587lale", "femme", "etranger", "roubarouba"};
//obs2= {"22man02","ayoub","homme",14748495,20,"volontaire","manouba"},obs3;
    int x;
x=ajouter("observateur.txt", obs1);
   
    if(x==1)
        printf("\najout d'observateur avec succés");
    else printf("\nechec ajout");
 
    /*x=modifier("observateur.txt",2587lale,obs1 );

    if(x==1)
        printf("\nModification d'observateur avec succés");
    else printf("\nechec Modification");
    x=supprimer("observateur.txt",2587lale );
    if(x==1)
        printf("\nSuppression d'observateur avec succés");
    else printf("\nechec Suppression");
x=chercher("observateur.txt",obs1 );*/


    if(atoi(obs1.ID)==-1)
        printf("introuvable");
    else 
        printf("existe");
    return 0;
}
