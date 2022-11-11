
#include <stdio.h>

int main(void) 
{
    // Affichage  de la taille des différents types de données
    printf("sizeof (int) = %d bytes, sizeof (int *) = %d bytes, sizeof (int **) = %d bytes, sizeof (char *) = %d bytes, sizeof (char **) = %d bytes, sizeof (char ***) = %d bytes, sizeof (float *) = %d bytes, sizeof (float **) = %d bytes, sizeof (float ***) = %d bytes", sizeof (int), sizeof (int *), sizeof (int **), sizeof (char *), sizeof (char **), sizeof (char ***), sizeof (float *), sizeof (float **), sizeof (float ***));
    return 0;
}

