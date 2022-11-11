# crew-x-
#include <stdio.h>
#include <stdlib.h>
#ifndef reclamation_H_INCLUDED
#define reclamation _H_INCLUDED

typedef struct date {
int j,n,annee;
} Date;
typedef struct reclamation
{
Date d;
 char id[20];
 char description[100];
 char type [50];
 char bureau_de_vote[40];
 } Reclamation ;

int ajouter (char*file,Reclamation R ,Date D);
int modifier ( char *file ,char id, Reclamation nouv );
int supprimer (char *file ,char id );
#endif
