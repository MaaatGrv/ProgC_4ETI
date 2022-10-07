#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tab[100];
    int entiers;
    srand(time(NULL));
    for (int i = 0; i <99; i++)
    {
        tab[i]= rand() % 100;
    }
    printf("entier à chercher :");
    scanf("%d", &entiers);
    for (int i = 0; i <99; i++)
    {
        if ( tab[i] == entiers )
        {
            printf("entier présent");
            break;
        }
    }
    return 0;
}