#include <stdio.h>
#include "operator.h"

int main(){
    /*
    ligne de commande. Il y a trois options pour cette commande: opérateur
    (+, -, *, /, %, &, |, ~), numéro un et numéro deux.
    use operator.c
    */
    char operator;
    int num1;
    int num2;
    printf("Entrez l'operateur: ");
    scanf("%c", &operator);
    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);
    printf("Entrez le deuxieme nombre: ");
    scanf("%d", &num2);
    switch(operator){
        case '+': {
            printf("Le resultat est: %d", somme(num1, num2));
            break;
        }
        case '-': {
            printf("Le resultat est: %d", difference(num1, num2));
            break;
        }
        case '*': {
            printf("Le resultat est: %d", produit(num1, num2));
            break;
        }
        case '/': {
            printf("Le resultat est: %d", quotient(num1, num2));
            break;
        }
        case '%': {
            printf("Le resultat est: %d", modulo(num1, num2));
            break;
        }
        case '&': {
            printf("Le resultat est: %d", et(num1, num2));
            break;
        }
        case '|': {
            printf("Le resultat est: %d", ou(num1, num2));
            break;
        }
        case '~': {
            printf("Le resultat est: %d", negation(num1));
            break;
        }
        default: {
            printf("Error");
            break;
        }
    }
    return 0;
}