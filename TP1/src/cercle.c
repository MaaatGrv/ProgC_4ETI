#include <stdio.h>

int main()
{
    float rayon = 5.4;
    float pi = 3.14;
    float perimetre = 2 * pi * rayon;
    float aire = pi * rayon * rayon;
    printf("Le perimetre est de %f et l'aire est de %f", perimetre, aire);
    return 0;
}

