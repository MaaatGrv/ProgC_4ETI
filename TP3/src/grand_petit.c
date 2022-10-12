#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tab[100];
    int max;
    int min;
    srand(time(NULL));
    for (int i = 0; i <99; i++)
    {
        tab[i]= rand() % 100;
    }
    max = tab[0];
    min = tab[0];
    for (int i = 1; i<99; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }
    printf(" max = %d, min = %d", max, min);
    return 0;
}
