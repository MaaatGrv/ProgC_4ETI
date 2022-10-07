
#include <stdio.h>

int main(void)
{
    int a = 1893;
    char* p = (char*)&a;
    printf("octets = %x %x %x %x", *(p+3), *(p + 2), *(p + 1), *p);
    return 0;
}
