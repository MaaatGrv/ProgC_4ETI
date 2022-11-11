

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int tab[100]; // déclaration d'un tableau de 100 entiers
    int i;
    int j;
    int temp;
    for (i = 0; i < 100; i++)
    {
        tab[i] = rand() % 100; // génération d'une valeur aléatoire pour le tableau tab
        printf("%d ", tab[i]); // affichage de la valeur du tableau
    }
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (tab[i] < tab[j]) // si la valeur du tableau est inférieure à la valeur du tableau
            {
                temp = tab[i]; // temp prend la valeur du tableau
                tab[i] = tab[j]; // la valeur du tableau prend la valeur du tableau
                tab[j] = temp; // la valeur du tableau prend la valeur de temp
            }

        }
    }
    printf(" sorted = "); 
    for (i = 0; i < 100; i++)
    {
        printf("%d ", tab[i]); // affichage de la valeur du tableau trié
    } 
    return 0;
}
