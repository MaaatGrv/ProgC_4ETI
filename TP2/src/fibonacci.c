#include <stdio.h>


int fibonacci(int n) {
    int i, a = 0, b = 1, c;
    for (i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int n = 10;
    printf("fibonacci(%d) = %d \n ", n, fibonacci(n)); 
    return 0;
}

