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
//Implémenter la même fonction de manière intératif
//Affiche tous les noms de des fichiers, des répertoires, des sous-répertoires et des fichiers dans les sous-répertoires
// Utiliser for (ou while ou do while) pour implémenter cette fonction
struct dossier{
	char nom_rep  [1024];
	DIR* chemin; 
};

void lire_dossier_interatif(char*rep){
	int i=0;
	struct dossier dossiers[1024];
	strcpy(dossiers[0].nom_rep,rep);	
	int j=1;
//parcourir le tableau
	while(i<j){ 
		dossiers[i].chemin = opendir(dossiers[i].nom_rep);
		if(dossiers[i].chemin == NULL){
			break;
		}
		struct dirent * lecture;
		chdir(dossiers[i].nom_rep); 
		while(1){
			lecture = readdir(dossiers[i].chemin);
			if (lecture == NULL){
				break;
			};
			char* file_name = lecture->d_name;
			printf ("%s ", file_name);


			;
			if(lecture->d_type && strcmp(".",file_name) && strcmp("..",file_name)){ 
				strcpy(dossiers[j].nom_rep,file_name);
				dossiers[j].chemin = opendir(file_name);
				j=j+1;
				if(dossiers[j].chemin == NULL){

				}
			}
		}
		i=i+3;
		putchar('\n');
		putchar('\n');
	}
}







int main() {

  char repertoire[100];
  printf ("nom du répertoire : ");
  scanf ("%s",repertoire);
  lire_dossier(repertoire);
  putchar('\n');
  return 0;
  
}