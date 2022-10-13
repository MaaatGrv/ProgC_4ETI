

#include <stdio.h>

int main(void)
{
    // déclaration des variables
    int a = 1893; 
    short b = 1893;
    float c = 1893.0;
    long int d = 1893;
    double e = 1893.0;
    long double f = 1893.0;

    // Déclaration des pointeurs
    char* p = (char*)&a;
    char*s = (char*)&b;
    char*t = (char*)&c;
    char*u = (char*)&d;
    char*v = (char*)&e;
    char*w = (char*)&f;

    // Affichage des valeurs des pointeurs
    printf("octets int = %x %x %x %x \n", *(p+3), *(p + 2), *(p + 1), *p); // affichage des octets de a en respectant la convention little endian
    printf("octets short = %x %x \n", *(s + 1), *s);
    printf("octets  float= %x %x %x %x \n", *(t + 3), *(t + 2), *(t + 1), *t);
    printf("octets long int = %x %x %x %x \n", *(u + 3), *(u + 2), *(u + 1), *u);
    printf("octets double = %x %x %x %x %x %x %x %x \n", *(v + 7), *(v + 6), *(v + 5), *(v + 4), *(v + 3), *(v + 2), *(v + 1), *v);
    printf("octets long double = %x %x %x %x %x %x %x %x \n", *(w + 9), *(w + 8), *(w + 7), *(w + 6), *(w + 5), *(w + 4), *(w + 3), *(w + 2), *(w + 1), *w);
    return 0;
}