//Print the value of the variable v=5 with differents type of bases variables in C.
// Include signed and unsigned for :char, short, int, long, long long, float, double, long double.

#include <stdio.h>

int main()
{
    char v = 5;
    signed char v1 = 5;
    unsigned char v2 = 5;
    short v3 = 5;
    signed short v4 = 5;
    unsigned short v5 = 5;
    int v6 = 5;
    signed int v7 = 5;
    unsigned int v8 = 5;
    long v9 = 5;
    signed long v10 = 5;
    unsigned long v11 = 5;
    long long v12 = 5;
    signed long long v13 = 5;
    unsigned long long v14 = 5;
    float v15 = 5;
    double v16 = 5;
    long double v17 = 5;
    printf("char: %d, signed char: %d, unsigned char: %d, short: %d, signed short: %d, unsigned short: %d, int: %d, signed int: %d, unsigned int: %d, long: %d, signed long: %d, unsigned long: %d, long long: %d, signed long long: %d, unsigned long long: %d, float: %d, double: %d, long double: %d", v, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    return 0;
}