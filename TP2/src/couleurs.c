//create a tab with 10 colors in format RGBA (red, green, blue, alpha)
//the colors are initialisate in hexadecimale 


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

int main() {
    Couleur couleurs[10];
    couleurs[0].r = 0xef;
    couleurs[0].g = 0x76;
    couleurs[0].b = 0x56;
    couleurs[0].a = 0x27;
    couleurs[1].r = 0xef;
    couleurs[1].g = 0xff;
    couleurs[1].b = 0x5;
    couleurs[1].a = 0x8;
    couleurs[2].r = 0xae;
    couleurs[2].g = 0xdd;
    couleurs[2].b = 0x12;
    couleurs[2].a = 0x44;
    couleurs[3].r = 0xbb;
    couleurs[3].g = 0xb8;
    couleurs[3].b = 0x5c;
    couleurs[3].a = 0x3a;
    couleurs[4].r = 0xf5;
    couleurs[4].g = 0xb1;
    couleurs[4].b = 0x38;
    couleurs[4].a = 0x43;
    couleurs[5].r = 0xde;
    couleurs[5].g = 0x11;
    couleurs[5].b = 0x87;
    couleurs[5].a = 0xda;
    couleurs[6].r = 0xad;
    couleurs[6].g = 0x78;
    couleurs[6].b = 0x56;
    couleurs[6].a = 0x34;
    couleurs[7].r = 0xef;
    couleurs[7].g = 0x7a;
    couleurs[7].b = 0x5d;
    couleurs[7].a = 0x3f;
    couleurs[8].r = 0xbe;
    couleurs[8].g = 0x2b;
    couleurs[8].b = 0xa0;
    couleurs[8].a = 0x26;
    couleurs[9].r = 0xef;
    couleurs[9].g = 0xc3;
    couleurs[9].b = 0x14;
    couleurs[9].a = 0x30;
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d : %x %x %x %x \n", i, couleurs[i].r, couleurs[i].g, couleurs[i].b, couleurs[i].a);
    }
    return 0;
}



