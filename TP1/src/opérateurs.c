#include <stdio.h>

int main()
{
    // Initialisation des variables
    int a = 16; 
    int b = 3;
    // On test et affiche les diffénrentes opérations
    printf("a+b=%d, a-b=%d, a*b=%d, a/b=%d, a%%b=%d, a&&b=%d, a||b=%d, !a=%d", a+b, a-b, a*b, a/b, a%b, a&&b, a||b, !a);
    return 0;
}