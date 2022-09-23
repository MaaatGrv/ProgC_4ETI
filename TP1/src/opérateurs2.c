//The program use 3 variables 'num1' (int), 'num2' (int) and 'op' (char).
//Op contain the operators +, -, \*, /, %, &, |, ~
//Use 'switch' and 'case' to print the result of the operation between 'num1' and 'num2' with the operator 'op'.

#include <stdio.h>

int main()
{
    int num1 = 16;
    int num2 = 3;
    char op = '+';
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