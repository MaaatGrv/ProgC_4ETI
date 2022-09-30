#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c;
    int i;
    for (i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int n;
    printf("Entrez n : ");
    scanf("%d", &n);
    printf("fibonacci(%d) = %d", n, fibonacci(n));
    return 0;
}