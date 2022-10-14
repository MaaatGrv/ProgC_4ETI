

#include <stdio.h>
#include <string.h>

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

//on cherche une cherche une phrase dans un fichier, les deux sont à saisir par l'utilisateur
int chercher_phrase(char* nom_de_fichier, char* phrase){
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

int main() {
    char nom_de_fichier[100];
    char phrase[100];
    printf("Entrez le nom du fichier: ");
    scanf("%s", nom_de_fichier);
    printf("Entrez la phrase à chercher: ");
    scanf("%s", phrase);
    lire_fichier(nom_de_fichier);
    chercher_phrase(nom_de_fichier, phrase);
    return 0;
}