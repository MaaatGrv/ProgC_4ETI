
#include <stdio.h>

int puissance(int a, int b) {
    int i, res = 1;
    for (i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

int main() {
    int a=2;
    int b=2;
    printf("%d ^ %d = %d \r ", a, b, puissance(a, b)); // \r pour retour à la ligne
    return 0;
}

