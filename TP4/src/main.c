#include <stdio.h>
#include "operator.h"

int main(){
    int num1 = 16;
    int num2 = 3;
    char op = '+'; //choix de l'opérateur
    switch (op) //choix de l'opérateur
    {
        case '+': //addition
            printf("%d", somme(num1,num2));
            break;
        case '-': //soustraction
            printf("%d", difference(num1,num2));
            break;
        case '*': //multiplication
            printf("%d", multiplication(num1,num2));
            break;
        case '/': //division
            printf("%d", quotient(num1,num2));
            break;
        case '%': //modulo
            printf("%d", modulo(num1,num2));
            break;
        case '&': //et logique
            printf("%d", et(num1,num2));
            break;
        case '|': //ou logique
            printf("%d", ou(num1,num2));
            break;
        case '~': //non logique
            printf("%d", negation(num1));
            break;
        default: //si l'opérateur n'est pas reconnu
            printf("Error");
            break;
    }
    return 0;
}


