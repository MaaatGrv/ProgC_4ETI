#include <stdio.h>

int longueur(char *chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    return i;
}

void copie(char *chaine1, char *chaine2) {
    int i = 0;
    while (chaine1[i] != '\0') {
        chaine2[i] = chaine1[i];
        i++;
    }
    chaine2[i] = '\0';
}

void concatene(char *chaine1, char *chaine2, char *chaine3) {
    int i = 0;
    while (chaine1[i] != '\0') {
        chaine3[i] = chaine1[i];
        i++;
    }
    int j = 0;
    while (chaine2[j] != '\0') {
        chaine3[i] = chaine2[j];
        i++;
        j++;
    }
    chaine3[i] = '\0';
}

int main() {
    char chaine1[100], chaine2[100], chaine3[100];
    printf("Entrez une chaine de caractères : ");
    scanf("%s", chaine1);
    printf("Entrez une autre chaine de caractères : ");
    scanf("%s", chaine2);
    printf("La longueur de la première chaine est %d caractères et la longueur de la deuxième chaine est %d caractères \n", longueur(chaine1), longueur(chaine2));
    copie(chaine1, chaine3);
    printf("La copie de la première chaine est %s \n", chaine3);
    concatene(chaine1, chaine2, chaine3);
    printf("La concaténation des deux chaines est %s \n", chaine3);
    return 0;
}