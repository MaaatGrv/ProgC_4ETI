#include <stdio.h>

int main() {
    int d = 68; 
    int bit4 = (d >> 4) & 1; // décalage de 4 bits vers la droite et masquage avec 1
    int bit20 = (d >> 20) & 1; // décalage de 20 bits vers la droite et masquage avec 1
    printf("%d", bit4 & bit20); // affichage du résultat
    return 0;
}



