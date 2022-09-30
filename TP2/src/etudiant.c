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
    Etudiant etudiant;
    printf("Entrez le nom : ");
    scanf("%s", etudiant.nom);
    printf("Entrez le prenom : ");
    scanf("%s", etudiant.prenom);
    printf("Entrez l'adresse : ");
    scanf("%s", etudiant.adresse);
    printf("Entrez la premiere note : ");
    scanf("%d", &etudiant.notes[0]);
    printf("Entrez la deuxieme note : ");
    scanf("%d", &etudiant.notes[1]);
    printf("Nom : %s \n", etudiant.nom);
    printf("Prenom : %s \n", etudiant.prenom);
    printf("Adresse : %s \n", etudiant.adresse);
    printf("Premiere note : %d \n", etudiant.notes[0]);
    printf("Deuxieme note : %d \n", etudiant.notes[1]);
    return 0;
}