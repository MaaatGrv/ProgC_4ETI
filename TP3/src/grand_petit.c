
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int tab[100];
    int i;
    int max;
    int min;
    for (i = 0; i < 100; i++)
    {
        tab[i] = rand() % 100;
        printf("%d ", tab[i]);
    }
    max = tab[0];
    min = tab[0];
    for (i = 0; i < 100; i++)
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
