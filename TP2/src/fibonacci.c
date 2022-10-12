#include <stdio.h>

int fibonacci(int n) { // fonction qui calcule le n-ième terme de la suite de Fibonacci
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
    scanf("%d", &n); // lecture de la valeur de n
    printf("fibonacci(%d) = %d", n, fibonacci(n)); // affichage du résultat
    return 0;
}
