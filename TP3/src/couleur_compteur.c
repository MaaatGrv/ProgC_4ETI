#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
    int count;
} CouleurCount;

int main(){
    int toskip[100];
    srand(time(NULL));
    Couleur couleurs[100];
    CouleurCount couleursCount[100];

    // Création des couleurs
    for (int i = 0; i < 99; i++) {
        couleurs[i].r = rand() % 3;
        couleurs[i].g = rand() % 3;
        couleurs[i].b = rand() % 3;
        couleurs[i].a = rand() % 3;
    }

    // Création des couleursCount : on initialise le count à 1 et on incrémente si il y a des doublons
    for (int i = 0; i < 99; i++) { // On parcourt toutes les couleurs
        couleursCount[i].r = couleurs[i].r; // On copie les couleurs
        couleursCount[i].g = couleurs[i].g; 
        couleursCount[i].b = couleurs[i].b;
        couleursCount[i].a = couleurs[i].a;
        couleursCount[i].count = 1; // On initialise le count à 1
        for (int j = i + 1; j < 99; j++) {  // On parcourt toutes les couleurs restantes
            if (couleurs[i].r == couleurs[j].r && couleurs[i].g == couleurs[j].g && couleurs[i].b == couleurs[j].b && couleurs[i].a == couleurs[j].a) {
                couleursCount[i].count++;
                toskip[j] = 1; // On met à 1 pour ne pas le compter deux fois
            }
        }
    }

    for (int i = 0; i < 99; i++) 
    {
        if (toskip[i] == 1) { // Les couleurs ne sont pas affichées plusieurs fois si elles ont déjé été comptées
            continue;
        }
        printf("r=0x%02x, g=0x%02x, b=0x%02x, a=0x%02x, count=%d \n", couleursCount[i].r, couleursCount[i].g, couleursCount[i].b, couleursCount[i].a, couleursCount[i].count);
    }
    return 0;
}