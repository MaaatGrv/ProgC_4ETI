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
    for (i = 0; i < 100; i++) // création du tableau de 100 entiers aléatoires
    {
        tab[i] = rand() % 100;
    }
    for (i = 0; i < 100; i++) // Le tableau est trié dans l'ordre croissant
    {
        for (j = 0; j < 100; j++) 
        {
            if (tab[i] < tab[j])
            {
                temp = tab[i]; // variable temporaire pour stocker la valeur de tab[i]
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    printf(" sorted = "); 
    for (i = 0; i < 100; i++)
    {
        printf("%d ", tab[i]); // Affichage du tableau trié
    } 

    // on cherche un entier par dichotomie
    printf(" entier = ");
    scanf("%d", &entier); // lecture de l'entier à chercher
    int min = 0;
    int max = sizeof(tab)/sizeof(tab[0]); //on divise la taille totale du tableau par la taille de l’élément du tableau pour obtenir le nombre d’éléments du tableau
    int milieu = (min + max) / 2; // on calcule le milieu du tableau
    
    /*
    tant que l'entier n'est pas trouvé et que le tableau n'est pas vide
    on cherche l'entier dans la partie du tableau où il peut se trouver
    on réduit la taille du tableau à chaque itération
    on calcule le milieu du tableau
    on compare l'entier à chercher avec l'entier du milieu du tableau
    si l'entier est inférieur à l'entier du milieu du tableau
    on cherche l'entier dans la partie gauche du tableau
    sinon on cherche l'entier dans la partie droite du tableau
    */

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

