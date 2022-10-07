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
    //afficher le tableau
    for (int i = 0; i < 99; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\nmax = %d, min = %d", tab[99], tab[0]); 
    return 0;
}