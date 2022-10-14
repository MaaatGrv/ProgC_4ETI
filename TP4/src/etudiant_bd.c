#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

typedef struct { // structure qui représente un étudiant
    char nom[20];
    char prenom[20];
    char adresse[20];
    union { // union qui représente la note de l'étudiant
        int notes[2];
    };
} Etudiant;

int main(){
    Etudiant etudiants[2]; // déclaration d'un tableau d'étudiants
    char nom_de_fichier[] = "etudiant.txt";
    // ask for the informations to enter
    for (int i = 0; i < 2; i++) { // boucle qui affiche les informations de chaque étudiant
        char nom[20];
        char prenom[20];
        char adresse[20];
        int note1;
        int note2;
        char message[100];
        printf("Nom: ");
        scanf("%s", nom);
        printf("Prenom: ");
        scanf("%s", prenom);
        printf("Adresse: ");
        scanf("%s", adresse);
        printf("Premiere note: ");
        scanf("%d", &note1);
        printf("Deuxieme note: ");
        scanf("%d", &note2);
        
        //write the informations in the mmessage
        sprintf(message, "Nom : %s \nPrénom : %s \nAdresse : %s \nNote 1 : %d \nNote 2 : %d \n \n", nom, prenom, adresse, note1, note2);
        //write the message in the file
        ecrire_dans_fichier(nom_de_fichier, message);
    }
    return 0;
}