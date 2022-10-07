#include <stdio.h>

int main() {
    short a=1893;
    char* p1 = (char*) &a;
    printf("short : %x %x %x %x \n", p1[3], p1[3], p1[1], p1[0]);

    int b=1893;
    char* p2 = (char*) &b;
    printf("int : %x %x %x %x \n", p2[3], p2[3], p2[1], p2[0]);

    long c=1893;
    char* p3 = (char*) &c;
    printf("long : %x %x %x %x \n", p3[3], p3[3], p3[1], p3[0]);

    float d=1893;
    char* p4 = (char*) &d;
    printf("float : %x %x %x %x \n", p4[3], p4[3], p4[1], p4[0]);

    double e=1893;
    char* p5 = (char*) &e;
    printf("double : %x %x %x %x %x %x %x %x \n", p5[7], p5[6], p5[5], p5[4], p5[3], p5[2], p5[1], p5[0]);

    long double f=1893;
    char* p6 = (char*) &f;
    printf("long double : %x %x %x %x %x %x %x %x %x %x \n", p6[9], p6[8], p6[7], p6[6], p6[5], p6[4], p6[3], p6[2], p6[1], p6[0]);

    return 0;
}