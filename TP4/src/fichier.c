#include <stdio.h>
#include "fichier.h"

int lire_fichier(char* nom_de_fichier){
    FILE *fichier = NULL;
    fichier = fopen(nom_de_fichier, "r");
    if (fichier != NULL){
        char caractereActuel = 0;
        while (caractereActuel != EOF){
            caractereActuel = fgetc(fichier);
            printf("%c", caractereActuel);
        }
        fclose(fichier);
    }
    else{
        printf("Impossible d'ouvrir le fichier");
    }
    return 0;
}

int ecrire_dans_fichier(char* nom_de_fichier, char* message){
    FILE *fichier = NULL;
    fichier = fopen(nom_de_fichier, "a");
    if (fichier != NULL){
        // ecrire le message dans le fichier
        fputs(message, fichier);
        fclose(fichier);
    }
    else{
        printf("Impossible d'ouvrir le fichier");
    }
    return 0;
}