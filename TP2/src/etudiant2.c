#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    strcpy(etudiants[0].nom, "Doe");
    strcpy(etudiants[0].prenom, "John");
    strcpy(etudiants[0].adresse, "1234 Main St");
    etudiants[0].notes[0] = 10;
    etudiants[0].notes[1] = 20;
    strcpy(etudiants[1].nom, "Doe");
    strcpy(etudiants[1].prenom, "Jane");
    strcpy(etudiants[1].adresse, "1234 Main St");
    etudiants[1].notes[0] = 10;
    etudiants[1].notes[1] = 20;
    strcpy(etudiants[2].nom, "Doe");
    strcpy(etudiants[2].prenom, "Jack");
    strcpy(etudiants[2].adresse, "1234 Main St");
    etudiants[2].notes[0] = 10;
    etudiants[2].notes[1] = 20;
    strcpy(etudiants[3].nom, "Doe");
    strcpy(etudiants[3].prenom, "Jill");
    strcpy(etudiants[3].adresse, "1234 Main St");
    etudiants[3].notes[0] = 10;
    etudiants[3].notes[1] = 20;
    strcpy(etudiants[4].nom, "Doe");
    strcpy(etudiants[4].prenom, "Jenny");
    strcpy(etudiants[4].adresse, "1234 Main St");
    etudiants[4].notes[0] = 10;
    etudiants[4].notes[1] = 20;
    for (int i = 0; i < 5; i++) {
        printf("Nom : %s \n", etudiants[i].nom);
        printf("Prenom : %s \n", etudiants[i].prenom);
        printf("Adresse : %s \n", etudiants[i].adresse);
        printf("Premiere note : %d \n", etudiants[i].notes[0]);
        printf("Deuxieme note : %d \n", etudiants[i].notes[1]);
    }
    return 0;
}
