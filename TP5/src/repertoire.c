/*
Afficher le répertoire saisi par l'utilisateur et les fichiers qui s'y trouvent 
*/

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

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <nom_dossier>\n", argv[0]);
        exit(1);
    }
    lire_dossier_recursif(argv[1]);
    return 0;
}