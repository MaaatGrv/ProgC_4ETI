#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { // structure qui représente un étudiant
    char nom[20];
    char prenom[20];
    char adresse[20];
    union { // union qui représente la note de l'étudiant
        int notes[2];
    };
} Etudiant;

int main() {
    Etudiant etudiants[5]; // déclaration d'un tableau d'étudiants
    strcpy(etudiants[0].nom, "Dupont"); // affectation du nom de l'étudiant 1
    strcpy(etudiants[0].prenom, "John"); // affectation du prenom de l'étudiant 1
    strcpy(etudiants[0].adresse, "1234 Main St"); // affectation de l'adresse de l'étudiant 1
    etudiants[0].notes[0] = 10;
    etudiants[0].notes[1] = 20;
    strcpy(etudiants[1].nom, "Aubert");
    strcpy(etudiants[1].prenom, "Jane");
    strcpy(etudiants[1].adresse, "1234 Main St");
    etudiants[1].notes[0] = 10;
    etudiants[1].notes[1] = 20;
    strcpy(etudiants[2].nom, "Reynolds");
    strcpy(etudiants[2].prenom, "Jack");
    strcpy(etudiants[2].adresse, "1234 Main St");
    etudiants[2].notes[0] = 10;
    etudiants[2].notes[1] = 20;
    strcpy(etudiants[3].nom, "Zhang");
    strcpy(etudiants[3].nom, "Doe");
    strcpy(etudiants[3].prenom, "Jill");
    strcpy(etudiants[4].nom, "Ceccaldi");
    strcpy(etudiants[4].prenom, "Jenny");
    strcpy(etudiants[4].adresse, "1234 Main St");
    etudiants[4].notes[0] = 10;
    etudiants[4].notes[1] = 20;
    for (int i = 0; i < 5; i++) { // boucle qui affiche les informations de chaque étudiant
        printf("Nom : %s \n", etudiants[i].nom);
        printf("Prenom : %s \n", etudiants[i].prenom);
        printf("Adresse : %s \n", etudiants[i].adresse);
        printf("Premiere note : %d \n", etudiants[i].notes[0]);
        printf("Deuxieme note : %d \n", etudiants[i].notes[1]);
    }
    return 0;

}
