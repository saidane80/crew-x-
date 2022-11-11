#include <stdio.h>
#include <string.h>
#include"listes
.h"

int main()
{
    liste l1= {25402,"orient1","idt1"},l2= {14575,"orient2","idt2"},l3;
    int x=ajouter("liste electoral.txt", l1);
    /*
    if(x==1)
        printf("\najout de liste avec succés");
    else printf("\nechec ajout");
        */
    x=modifier("liste.txt",25402,l2 );

    if(x==1)
        printf("\nModification de liste avec succés");
    else printf("\nechec Modification");
   /* x=supprimer("liste.txt",1 );
    if(x==1)
        printf("\nSuppression de liste avec succés");
    else printf("\nechec Suppression");
    l3=cherche
r("liste.txt",3 );
    if(l3.id==-1)
        printf("introuvable");*/
    return 0;
}
