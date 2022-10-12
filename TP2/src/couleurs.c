#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct { // structure qui représente une couleur
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

int main()
{
    srand(time(NULL)); 
    Couleur couleurs[10]; // déclaration d'un tableau de 10 couleurs
    for (int i = 0; i < 10; i++) {
        couleurs[i].r = rand() % 256; // génération d'une valeur aléatoire pour le rouge
        couleurs[i].g = rand() % 256; // génération d'une valeur aléatoire pour le vert
        couleurs[i].b = rand() % 256; // génération d'une valeur aléatoire pour le bleu
        couleurs[i].a = rand() % 256; // génération d'une valeur aléatoire pour l'alpha
        printf("Couleur %d : r=0x%02x, g=0x%02x, b=0x%02x, a=0x%02x \n", i + 1, couleurs[i].r, couleurs[i].g, couleurs[i].b, couleurs[i].a);
    }
    return 0;
}
