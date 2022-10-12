
#include <stdio.h>

int main()
{
    int num1 = 16;
    int num2 = 3;
    char op = '+'; //choix de l'opérateur
    switch (op) //choix de l'opérateur
    {
    {
        case '+': //addition
            printf("%d", num1+num2);
            break;
        case '-': //soustraction
            printf("%d", num1-num2);
            break;
        case '*': //multiplication
            printf("%d", num1*num2);
            break;
        case '/': //division
            printf("%d", num1/num2);
            break;
        case '%': //modulo
            printf("%d", num1%num2);
            break;
        case '&': //et logique
            printf("%d", num1&num2);
            break;
        case '|': //ou logique
            printf("%d", num1|num2);
            break;
        case '~': //non logique
            printf("%d", ~num1);
            break;
        default: //si l'opérateur n'est pas reconnu
            printf("Error");
            break;
    }
    return 0;
}