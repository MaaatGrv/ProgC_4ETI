#include <stdio.h>
#include <stdlib.h>

typedef struct { // structure qui représente un étudiant
    char nom[20];
    char prenom[20];
    char adresse[20];
    union { // union qui représente la note de l'étudiant
        int notes[2];
    };
} Etudiant;

int main() { // programme principal
    Etudiant etudiant; // déclaration d'un étudiant
    printf("Entrez le nom : ");
    scanf("%s", etudiant.nom); // lecture du nom de l'étudiant
    printf("Entrez le prenom : ");
    scanf("%s", etudiant.prenom); // lecture du prenom de l'étudiant
    printf("Entrez l'adresse : ");
    scanf("%s", etudiant.adresse); // lecture de l'adresse de l'étudiant
    printf("Entrez la premiere note : ");
    scanf("%d", &etudiant.notes[0]); // lecture de la première note de l'étudiant
    printf("Entrez la deuxieme note : ");
    scanf("%d", &etudiant.notes[1]); // lecture de la deuxième note de l'étudiant
    printf("Nom : %s \n", etudiant.nom); // affichage du nom de l'étudiant
    printf("Prenom : %s \n", etudiant.prenom); // affichage du prenom de l'étudiant
    printf("Adresse : %s \n", etudiant.adresse); // affichage de l'adresse de l'étudiant
    printf("Premiere note : %d \n", etudiant.notes[0]); // affichage de la première note de l'étudiant
    printf("Deuxieme note : %d \n", etudiant.notes[1]); // affichage de la deuxième note de l'étudiant
    return 0;
}
