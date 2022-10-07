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

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
    int count;
} CouleurResult;

int main(){
    srand(time(NULL));
    Couleur couleurs[100];
    CouleurCount couleursCount[100];
    for (int i = 0; i < 999; i++) {
        couleurs[i].r = rand() % 30;
        couleurs[i].g = rand() % 30;
        couleurs[i].b = rand() % 30;
        couleurs[i].a = rand() % 30;
    }
    for (int i = 0; i < 100; i++)
    {
        couleursCount[i].r = couleurs[i].r;
        couleursCount[i].g = couleurs[i].g;
        couleursCount[i].b = couleurs[i].b;
        couleursCount[i].a = couleurs[i].a;
        couleursCount[i].count = 1;
        for (int j = 0; j < 100; j++)
        {
            if (couleurs[i].r == couleurs[j].r && couleurs[i].g == couleurs[j].g && couleurs[i].b == couleurs[j].b && couleurs[i].a == couleurs[j].a && i != j)
            {
                couleursCount[i].count++;
            }
        }
       
    }
    for (int i = 0; i < 100; i++)
    {
        couleursCount[i].r = couleurs[i].r;
        couleursCount[i].g = couleurs[i].g;
        couleursCount[i].b = couleurs[i].b;
        couleursCount[i].a = couleurs[i].a;
        couleursCount[i].count = 1;
        for (int j = 0; j < 100; j++)
        {
            if (couleurs[i].r == couleurs[j].r && couleurs[i].g == couleurs[j].g && couleurs[i].b == couleurs[j].b && couleurs[i].a == couleurs[j].a && i != j)
            {
                couleursCount[i].count++;
            }
        }
       
    }
    return 0;
}