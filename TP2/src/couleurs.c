#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

int main()
{
    srand(time(NULL));
    Couleur couleurs[10];
    for (int i = 0; i < 10; i++) {
        couleurs[i].r = rand() % 256;
        couleurs[i].g = rand() % 256;
        couleurs[i].b = rand() % 256;
        couleurs[i].a = rand() % 256;
        printf("Couleur %d : r=0x%02x, g=0x%02x, b=0x%02x, a=0x%02x \n", i + 1, couleurs[i].r, couleurs[i].g, couleurs[i].b, couleurs[i].a);
    }
    return 0;
}
