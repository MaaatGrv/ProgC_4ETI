#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[20];
    char prenom[20];
    char adresse[20];
    union {
        int notes[2];
    };
} Etudiant;

int main() {
    Etudiant etudiants[5];
    for (int i = 0; i < 5; i++) {
        printf("                    \n"); 
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

    for (int i = 0; i < 5; i++) {
        printf("                    \n"); 
        printf("Nom de l'étudiant %d: %s \n", i + 1, etudiants[i].nom); 
        printf("Prénom de l'étudiant %d: %s \n", i + 1, etudiants[i].prenom);
        printf("Adresse de l'étudiant %d: %s \n", i + 1, etudiants[i].adresse);
        printf("Note de Programmation en C de l'étudiant %d: %d \n", i + 1, etudiants[i].notes[0]);
        printf("Note de Système d'exploitation de l'étudiant %d: %d \n", i + 1, etudiants[i].notes[1]);
    }
    return 0;
}



