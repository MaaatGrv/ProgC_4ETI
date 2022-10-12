#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tab[100]; // déclaration d'un tableau de 100 entiers
    int max; // déclaration d'une variable de type int
    int min; // déclaration d'une variable de type int
    srand(time(NULL));
    for (int i = 0; i <99; i++) 
    {
        tab[i]= rand() % 100; // génération d'une valeur aléatoire pour le tableau tab
    }
    max = tab[0]; // initialisation de la variable max avec la première valeur du tableau
    min = tab[0]; // initialisation de la variable min avec la première valeur du tableau
    for (int i = 1; i<99; i++)
    {
        if (tab[i] > max) // si la valeur du tableau est supérieure à max

        {
            max = tab[i]; // max prend la valeur du tableau
        }
        if (tab[i] < min) // si la valeur du tableau est inférieure à min

        {
            min = tab[i]; // min prend la valeur du tableau
        }
    }
    printf(" max = %d, min = %d", max, min); // affichage de la valeur de max et min
    return 0;
}
