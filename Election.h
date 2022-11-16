# crew-x-
#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED
#include<stdio.h>
typedef struct date{
int jour,mois,annee;
}Date ;
typedef struct election{
char identifiant[50];
int nombre_habitant,nombre_conseillers;
Date D;
char municipalite[20];

}Election;
int ajouter(char *, Election );
int modifier( char *, char[], Election );
int supprimer(char *, char[] );
Election chercher(char *, char[]);

#endif // ELECTION_H_INCLUDED

