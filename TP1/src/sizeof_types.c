//Print the size of differents type of bases variables in C in octets.
// Include signed and unsigned char, short, int, long, long long, float, double, long double.

#include <stdio.h>


int main()
{
    printf("Size of char: %d octets, signed char: %d octets, unsigned char: %d octets, short: %d octets, int: %d octets, long: %d octets, long long: %d octets, float: %d octets, double: %d octets, long double: %d octets", sizeof(char), sizeof(signed char), sizeof(unsigned char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long), sizeof(float), sizeof(double), sizeof(long double));
    return 0;
}