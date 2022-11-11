#include <stdio.h>

int main()
{
    int v = 1024;
    int sz = sizeof(v); // conversion taille max en bits
    printf("v=%d en binaire: ", v); // affichage de la valeur de v en décimal
    for (int i = sz*8 ; i >= 0; i--)
    {
        if (v & (1 << i)) // si le bit est à 1 on affiche 1
        {
            printf("1");
        }
        else // sinon on affiche 0
        {
            printf("0");
        }
    }
    printf("\n"); // Saut de ligne
    return 0;
}