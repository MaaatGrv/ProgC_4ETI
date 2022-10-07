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
    srand(time(NULL));
    Couleur couleurs[1000];
    CouleurCount couleursCount[1000];
    for (int i = 0; i < 999; i++) {
        couleurs[i].r = rand() % 3;
        couleurs[i].g = rand() % 3;
        couleurs[i].b = rand() % 3;
        couleurs[i].a = rand() % 3;
    }
    for (int i = 0; i < 999; i++)
    {
        couleursCount[i].r = couleurs[i].r;
        couleursCount[i].g = couleurs[i].g;
        couleursCount[i].b = couleurs[i].b;
        couleursCount[i].a = couleurs[i].a;
        couleursCount[i].count = 1;
        for (int j = 0; j < 999; j++)
        {
            if (couleurs[i].r == couleurs[j].r && couleurs[i].g == couleurs[j].g && couleurs[i].b == couleurs[j].b && couleurs[i].a == couleurs[j].a && i != j)
            {
                couleursCount[i].count++;
            }
        }
        printf("Couleur %d : r=0x%02x, g=0x%02x, b=0x%02x, a=0x%02x, count=%d \n", i + 1, couleursCount[i].r, couleursCount[i].g, couleursCount[i].b, couleursCount[i].a, couleursCount[i].count);
    }
    return 0;
}