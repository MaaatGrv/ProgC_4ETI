
#include <stdio.h>

int main()
{
    int num1 = 16;
    int num2 = 3;
    char op = '+'; //on choisi un opérateur
    switch (op) 
    {
        case '+':
            printf("%d", num1+num2);
            break;
        case '-':
            printf("%d", num1-num2);
            break;
        case '*':
            printf("%d", num1*num2);
            break;
        case '/':
            printf("%d", num1/num2);
            break;
        case '%':
            printf("%d", num1%num2);
            break;
        case '&':
            printf("%d", num1&num2);
            break;
        case '|':
            printf("%d", num1|num2);
            break;
        case '~':
            printf("%d", ~num1);
            break;
        default:
            printf("Error");
            break;
    }
    return 0;
}