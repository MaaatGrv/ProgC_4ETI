#include <stdio.h>

int fibonacci(int n) {
    // Initialisation des variables
    int a = 0, b = 1, c;
    int i;
    // Boucle qui calcule le n-ième terme de la suite de Fibonacci
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
