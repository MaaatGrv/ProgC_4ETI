
#include <stdio.h>
#include <stdlib.h>


int Exo_3_4()
{
    int tab[100];
    int i;
    int entier;
    int present = 0;

    for (i = 0; i < 100; i++) //on rempli le tableau de valeurs aléatoires
    {
        tab[i] = rand() % 100;

    }

    printf(" entier = ");
    scanf("%d", &entier); //On demande a l'utilisateur l'entier à rechercher
    for (i = 0; i < 100; i++)
    {
        if (tab[i] == entier) //si l'entier est dans le tableau
        {
        printf("entier present");
        }
    }
    return 0;
}

int Exo_3_8() {
    char* sentences[10]; //on initialise les phrases
    sentences[0] = "J'aime beurrer mes biscottes";
    sentences[1] = "Il n'y a pas de bonne ou de mauvaise situation";
    sentences[2] = "j'ai tout fini chef";
    sentences[3] = "je suis vengeance";
    sentences[4] = "konichiwa";
    sentences[5] = "il est mignon ";
    sentences[6] = "Faut donner sa chance au produit";
    sentences[7] = "Il fait au plus 2m";
    sentences[8] = "l'equitation est un sport complexe";
    sentences[9] = "Je suis un petit pokemon";
    char* sentence = "je suis vengeance";// choix de la phrase
    int i = 0;
    while (i < 10 && sentences[i] != sentence) { //tant que i est inferieur a 10 et que la phrase n'est pas la bonne on continue la boucle 
        i++;
    }
    if (i < 10) {
        printf("la phrase est dans le tableau");
    } else {
        printf("la phrase n'est pas dans le tableau");
    }
    return 0;
}

int main() {

    Exo_3_8();
    return 0;
}