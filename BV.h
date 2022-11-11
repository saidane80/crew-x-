#ifndef BV_H_INCLUDED
#define BV_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct bv {
char ID[30];
int co;
int ce;
char adresse [30];
int nb_salle;
int num_telephone;
char email[100];
char ID_agent_bv[30];
char etat_salle[30];
} BV;

int ajouter(char * , BV b);
int modifier(char * , int, BV b);
int recherche (char * , int);
int supprimer(char * ,int);
#endif // BV_H_INCLUDED 
 
