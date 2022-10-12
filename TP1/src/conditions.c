
#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 1000)
    {
        if (i % 2 == 0 && i % 15 == 0) // si i est pair et divisible par 15

        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    for (int i = 0; i <= 1000; i++) 

    {
        if (i % 103 == 0 || i % 107 == 0) // si i est divisible par 103 ou 107
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    i = 0;
    while (i <= 1000)
    {
        if (i % 7 == 0 || i % 5 == 0) // si i est divisible par 7 ou 5

        {
            if (i % 3 == 0) // si i est divisible par 3

            {
                i++;
                continue;
            }
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}

