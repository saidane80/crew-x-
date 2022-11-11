# crew-x-
#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED
#include<stdio.h>
typedef struct date{
int jour,mois,annee;
}Date ;
typedef struct election{
int identifiant,nombre_habitant,nombre_conseillers;
Date D;
char municipalite[20];

}Election;
int ajouter(char *, Election );
int modifier( char *, int, Election );
int supprimer(char *, int );
Election chercher(char *, int);

#endif // ELECTION_H_INCLUDED
