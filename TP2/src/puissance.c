#include <stdio.h>

int puissance(int a, int b) { // fonction qui calcule a puissance b
    int i, res = 1;
    for (i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

int main() {
    int a, b;
    printf("Entrez a et b : ");
    scanf("%d %d", &a, &b); // lecture des valeurs de a et b
    printf("%d^%d = %d ", a, b, puissance(a, b));
    return 0;