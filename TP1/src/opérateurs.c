//Print the result of all the operations (arithmetic and with &&, ||, !) between the variables a=16 and b=3.

#include <stdio.h>

int main()
{
    int a = 16;
    int b = 3;
    printf("a+b=%d, a-b=%d, a*b=%d, a/b=%d, a%%b=%d, a&&b=%d, a||b=%d, !a=%d", a+b, a-b, a*b, a/b, a%b, a&&b, a||b, !a);
    return 0;
}