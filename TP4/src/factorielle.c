#include <stdio.h>
#include <string.h>

int factorielle(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main() {
    int n= 6 ;
    printf("Factorielle de %d: %d \n", n, factorielle(n));
    return 0;
}
