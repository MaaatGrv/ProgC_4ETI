#include <stdio.h>
#include "operator.h"
#include "fichier.h"

int operator(int num1, int num2, char op)
{
    switch (op) //choix de l'opérateur
    {
        case '+': {//addition
            printf("%d\n", somme(num1,num2));
            break;
        }
        case '-': {//soustraction
            printf("%d\n", difference(num1,num2));
            break;
        }
        case '*': { //multiplication
            printf("%d\n", produit(num1,num2));
            break;
        }
        case '/': {//division
            printf("%d\n", quotient(num1,num2));
            break;
        }
        case '%': {//modulo
            printf("%d\n", modulo(num1,num2));
            break;
        }
        case '&': {//et logique
            printf("%d\n", et(num1,num2));
            break;
        }
        case '|': {//ou logique
            printf("%d\n", ou(num1,num2));
            break;
        }
        case '~': {//non logique
            printf("%d\n", negation(num1));
            break;
        }
        default: {//si l'opérateur n'est pas reconnu
            printf("Error");
            break;
        }
    }
    return 0;
}

int fichier(char* nom_de_fichier, char* message, char op)
{
    switch (op) //choix de l'opérateur
    {
        case 'r': {//lecture
            lire_fichier(nom_de_fichier);
            break;
        }
        case 'w': {//écriture
            ecrire_dans_fichier(nom_de_fichier, message);
            break;
        }
        default: {//si l'opérateur n'est pas reconnu
            printf("Error");
            break;
        }
    }
    return 0;
}

int main()
{
    // Operations
    int num1 = 16;
    int num2 = 3;
    char op = '-'; //choix de l'opérateur
    operator(num1, num2, op);

    // Manipulation de fichiers
    char nom_de_fichier[] = "test.txt";
    char message[] = "Bonjour!Coucou!Coucou!Coucou!Coucou!Coucou!Coucou! \n";
    char op2 = 'w'; //choix de l'opérateur
    fichier(nom_de_fichier, message, op2);
    return 0;
}