# crew-x-
#include <stdio.h>
#include <string.h>
#include"reclamation.h"

int main()
{Date D; 
    reclam r1={"123456","salle mal organisée",12,03,2022,"fax",1,3,2},r2={"678910","ouverture de salle en retard",10,03,2022,"fax",3,4,3} , r3 ;
    int y=ajouter("reclam.txt",r1, D);
    if(y==1)
        printf("\n ajout de reclamation avec succés");
    else printf("\n echec ajout");
    
    y=modifier("reclam.txt",1,r2);
    y=supprimer("reclam.txt",1);
    r3=chercher("reclam.txt",3);
    if(r3.id==-1)
        printf("introuvable");
    return 0 ;
}
