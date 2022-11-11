#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Observateur{
int age,CIN ;
char nom[10];
char prenom[10];
char profession[30];
char gouvernerat[20];
char ID[10];
char genre [10];
char observateurs [30];
char mdp [30];
}observateur;
int ajouter (char *,observateur);
int modifier(char *, int,observateur );
int supprimer(char *,int);
observateur chercher(char *,int);
#endif
