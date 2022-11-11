#include <stdio.h>

int main()
{
    int compteur = 10; //choix du compteur
    if (compteur < 4) //condition sur le compteur
    {
        printf(" %d < 4 inacceptable", compteur);
    }
    else //si compteur >= 4
    {
        for (int i = 0; i <= compteur; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (j == 0 | j == i-1 | i == compteur) //on place une étoile * au début et a la fin de chaque ligne, et on n'en met que sur la derniere ligne
                {
                    printf("*");
                }
                else //sinon on met des #
                {
                    printf("#");
                }
            }
            printf("\n");
        }
    }
    return 0;
}