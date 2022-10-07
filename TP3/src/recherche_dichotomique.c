#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //création du tableau
    int tab[100];
    srand(time(NULL));
    for (int i = 0; i <99; i++)
    {
        tab[i]= rand() % 100;
    }
    //trier le tableau dans l'ordre croissant
    int temp;
    for (int i = 0; i < 99; i++)
    {
        for (int j = i + 1; j < 99; j++)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    //recherche dichotomique
    int entier;
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