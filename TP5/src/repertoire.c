/*
Afficher le répertoire saisi par l'utilisateur et les fichiers qui s'y trouvent 
*/
#include "repertoire.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>


void lire_dossier(char *nom_dossier)
{
    DIR *dossier;
    struct dirent *fichier;
    dossier = opendir(nom_dossier);
    if (dossier == NULL)
    {
        printf("Impossible d'ouvrir le dossier %s !\n", nom_dossier);
        exit(1);
    }
    while ((fichier = readdir(dossier)) != NULL)
    {
        printf("%s \n", fichier->d_name);
    }
    printf("\n");
    closedir(dossier);
}

// Implémenter la même fonction de manière récursive
// pour afficher le contenu d'un répertoire et de tous ses sous-répertoires.

void lire_dossier_recursif(char *nom_dossier)
{
    DIR *dossier;
    struct dirent *fichier;
    dossier = opendir(nom_dossier);

    if (dossier == NULL)
    {
        printf("Impossible d'ouvrir le dossier %s !\n", nom_dossier);
        exit(1);
    }
    while ((fichier = readdir(dossier)) != NULL)
    {
        printf("%s \n", fichier->d_name);
        if (fichier->d_type == DT_DIR)
        {
            if (strcmp(fichier->d_name, ".") != 0 && strcmp(fichier->d_name, "..") != 0)
            {
                char *chemin = malloc(strlen(nom_dossier) + strlen(fichier->d_name) + 2);
                strcpy(chemin, nom_dossier);
                strcat(chemin, "/");
                strcat(chemin, fichier->d_name);
                lire_dossier_recursif(chemin);
                free(chemin);
            }
        }
    }
    printf("\n");
    closedir(dossier);
}
//Implémenter la même fonction de manière itératif
//Affiche tous les noms de des fichiers, des répertoires, des sous-répertoires et des fichiers dans les sous-répertoires
// Utiliser for (ou while ou do while) pour implémenter cette fonction
struct dossier{
	char nom_rep  [1024];
	DIR* chemin; 
};

void lire_dossier_iteratif(char *nom_fichier){
	int i=0;
	struct dossier dossiers[1024];
    dossiers[i].chemin = opendir(nom_fichier);
	int j=1;
//parcourir le tableau
    while (i<j){
        struct dirent *fichier;
        while ((fichier = readdir(dossiers[i].chemin)) != NULL){
            printf("%s \n", fichier->d_name);
            if (fichier->d_type == DT_DIR){
                if (strcmp(fichier->d_name, ".") != 0 && strcmp(fichier->d_name, "..") != 0){
                    char *chemin = malloc(strlen(nom_fichier) + strlen(fichier->d_name) + 3);
                    strcpy(chemin, nom_fichier);
                    strcat(chemin, "/");
                    strcat(chemin, fichier->d_name);
                    dossiers[j].chemin = opendir(chemin);
                    j++;
                    free(chemin);
                }
            }
        }
        i++;
    }
}


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <nom_dossier>\n", argv[0]);
        exit(1);
    }
    lire_dossier_iteratif(argv[1]);
    return 0;
}