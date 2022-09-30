#include <stdio.h>

int main() {
    int d = 68;
    int bit4 = (d >> 4) & 1;
    int bit20 = (d >> 20) & 1;
    printf("%d", bit4 & bit20);
    return 0;
}
