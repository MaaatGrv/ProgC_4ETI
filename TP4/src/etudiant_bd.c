#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

typedef struct {
    char nom[20];
    char prenom[20];
    char adresse[20];
    union {
        int notes[2];
    };
} Etudiant;

int fichier(char* nom_de_fichier, char* message, char op)
{
    switch (op) //choix de l'opérateur
    {
        case 'r': {//lecture
            lire_fichier(nom_de_fichier);
            break;
        }
        case 'w': {//écriture
            ecrire_dans_fichier(nom_de_fichier, message);
            break;
        }
        default: {//si l'opérateur n'est pas reconnu
            printf("Error");
            break;
        }
    }
    return 0;
}


int main() {
    Etudiant etudiants[5];

    for (int i = 0; i < 5; i++) {
        printf("Nom de l'étudiant %d: \n", i + 1);
        scanf("%s", etudiants[i].nom);
        printf("Prénom de l'étudiant %d: \n", i + 1);
        scanf("%s", etudiants[i].prenom);
        printf("Adresse de l'étudiant %d: \n", i + 1);
        scanf("%s", etudiants[i].adresse);
        printf("Note de Programmation en C de l'étudiant %d: \n", i + 1);
        scanf("%d", &etudiants[i].notes[0]);
        printf("Note de Système d'exploitation de l'étudiant %d: \n", i + 1);
        scanf("%d", &etudiants[i].notes[1]);

    }
    // Manipulation de fichiers
    char nom_de_fichier[] = "test.txt";
    char message[] = "Hello World!";
    char op2 = 'w'; //choix de l'opérateur
    fichier(nom_de_fichier, message, op2);
    return 0;

}



