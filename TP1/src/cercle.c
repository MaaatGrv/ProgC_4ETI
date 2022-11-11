#include <stdio.h>

int main()
{
    float rayon = 5.4; // rayon du cercle
    float pi = 3.14; // valeur de pi
    float perimetre = 2 * pi * rayon; // calcul du périmètre
    float aire = pi * rayon * rayon; // calcul de l'aire
    printf("Le perimetre est de %f et l'aire est de %f", perimetre, aire); // affichage des résultats
    return 0;
}

