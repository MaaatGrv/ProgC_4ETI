

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tab1[10];
    float tab2[10];
    int *ptr1 = tab1;
    float *ptr2 = tab2;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        tab1[i] = rand() % 100;
        tab2[i] = (float)rand() / (float)(RAND_MAX / 100);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            *ptr1 *= 3;
            *ptr2 *= 3;
        }
        ptr1++;
        ptr2++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("tab1[%d] = %d, tab2[%d] = %f \n", i, tab1[i], i, tab2[i]);
    }
    return 0;
}
