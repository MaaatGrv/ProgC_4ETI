

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tabint[10];
    float tabfloat[10];
    int *ptabint = tabint;
    float *ptabfloat = tabfloat;
    for (int i = 0; i < 10; i++) {
        tabint[i] = rand() %100;
        tabfloat[i] = rand() %101;
    }
    for (int i = 0; i < 10; i++) {
        printf("tabint[%d] = %d \t tabfloat[%d] = %f \n", i, tabint[i], i, tabfloat[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            *(ptabint + i) *= 3;
            *(ptabfloat + i) *= 3;
        }
    }

    printf("        \n");

    for (int i = 0; i < 10; i++) {
        printf("tabint[%d] = %d \t tabfloat[%d] = %f \n", i, tabint[i], i, tabfloat[i]);
    }
    return 0;
}

