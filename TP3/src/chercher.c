//create a tab of 100 random numbers and find a number in it, if it present print the message "entier present"

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int tab[100];
    int i;
    int entier;
    int present = 0;

    for (i = 0; i < 100; i++)
    {
        tab[i] = rand() % 100;

    }

    printf(" entier = ");
    scanf("%d", &entier);
    for (i = 0; i < 100; i++)
    {
        if (tab[i] == entier)
        {
        printf("entier present");
        }
    }
    return 0;
}
