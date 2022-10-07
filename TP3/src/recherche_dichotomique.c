#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int tab[100];
    int i;
    int j;
    int temp;
    int entier;
    for (i = 0; i < 100; i++)
    {
        tab[i] = rand() % 100;
    }
    for (i = 0; i < 100; i++) //tableau trié en odre croissant
    {
        for (j = 0; j < 100; j++)
        {
            if (tab[i] < tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    printf(" sorted = "); 
    for (i = 0; i < 100; i++)
    {
        printf("%d ", tab[i]);
    } 

//on cherche un entier par dichotomie
    printf(" entier = ");
    scanf("%d", &entier);
    int min = 0;
    int max = sizeof(tab)/sizeof(tab[0]); //on divise la taille totale du tableau par la taille de l’élément du tableau pour obtenir le nombre d’éléments du tableau
    int milieu = (min + max) / 2;
    while (tab[milieu] != entier && min < max)
    {
        if (tab[milieu] < entier)
        {
            min = milieu + 1;
        }
        else
        {
            max = milieu - 1;
        }
        milieu = (min + max) / 2;
    }
    if (tab[milieu] == entier)
    {
        printf("entier present");
    }
    return 0;
}

