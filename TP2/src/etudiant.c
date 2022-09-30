/*Imaginez que vous gérez les notes de cinq étudiant.e.es. En utilisant
uniquement des tableaux, écrivez un programme *etudiant.c* qui déclare,
initialise et affiche les détails des cinq étudiant.e.es. Pour chaque
étudiant.e, on est intéressé par son nom, son prénom, son adresse, et
ses notes dans 2 modules (Programmation en C, Système d'exploitation) avec une union*/

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
        printf("Nom de l'étudiant %d: ", i + 1);
        scanf("%s", etudiants[i].nom);
        printf("Prénom de l'étudiant %d: ", i + 1);
        scanf("%s", etudiants[i].prenom);
        printf("Adresse de l'étudiant %d: ", i + 1);
        scanf("%s", etudiants[i].adresse);
        printf("Note de Programmation en C de l'étudiant %d: ", i + 1);
        scanf("%d", &etudiants[i].notes[0]);
        printf("Note de Système d'exploitation de l'étudiant %d: ", i + 1);
        scanf("%d", &etudiants[i].notes[1]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Nom de l'étudiant %d: %s \n", i + 1, etudiants[i].nom); 
        printf("Prénom de l'étudiant %d: %s \n", i + 1, etudiants[i].prenom);
        printf("Adresse de l'étudiant %d: %s \n", i + 1, etudiants[i].adresse);
        printf("Note de Programmation en C de l'étudiant %d: %d \n", i + 1, etudiants[i].notes[0]);
        printf("Note de Système d'exploitation de l'étudiant %d: %d \n", i + 1, etudiants[i].notes[1]);
    }
    return 0;
}



