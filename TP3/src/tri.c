

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
    for (i = 0; i < 100; i++)
    {
        tab[i] = rand() % 100;
        printf("%d ", tab[i]);
    }
    for (i = 0; i < 100; i++)
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
    return 0;
}
