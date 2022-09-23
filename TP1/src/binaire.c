#include <stdio.h>

int main()
{
    int v = 1024;
    int sz = sizeof(v); // conversion taille max en bits
    printf("v=%d en binaire: ", v);
    for (int i = sz*8 ; i >= 0; i--)
    {
        if (v & (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}