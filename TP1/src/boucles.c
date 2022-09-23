//Print a triangle of 10 lines with the character * using a boucle for.

#include <stdio.h>

int main()
{
    int compteur = 10;
    if (compteur < 4)
    {
        printf(" %d < 4 inacceptable", compteur);
    }
    else
    {
        for (int i = 0; i <= compteur; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (j == 0 | j == i-1 | i == compteur)
                {
                    printf("*");
                }
                else
                {
                    printf("#");
                }
            }
            printf("\n");
        }
    }
    return 0;
}