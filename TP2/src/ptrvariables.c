#include <stdio.h>
#include <stdlib.h>

int main() {
    char c = 'a';
    short s = 1;
    int i = 2;
    long int li = 3;
    float f = 1;
    double d = 5.0;
    long double ld = 6.0;
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;
    printf("char : %x \n", *pc);
    printf("short : %x \n", *ps);
    printf("int : %x \n", *pi);
    printf("long int : %x \n", *pli);
    printf("float : %x \n", *pf);
    printf("double : %x \n", *pd);
    printf("long double : %x \n", *pld);
    return 0;
}




