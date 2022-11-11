ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Utilisateur
{
    char ID[10];
    char nom[40],prenom[40],adresse[50],date_naissance[40],choix_liste[30];
    int num_bureauvote,cin,code_postal;
}utilisateur;
//les prototypes
int ajouter (char *,utilisateur);
int modifier (char *, int, utilisateur);
int supprimer (char *,int );
utilisateur chercher(char *,int);
#endif
