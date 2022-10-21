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

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <nom_dossier>\n", argv[0]);
        exit(1);
    }
    lire_dossier(argv[1]);
    return 0;
}