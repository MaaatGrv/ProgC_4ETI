//create a tab of 100 random numbers and find a number in it, if it present print the message "entier present"

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=0;
    int verif=1;
    char phrase_seach[200];

    //creation du tableau de phrases
    char *tableau[10] = {"J'aime beurrer mes biscottes\n","Je vole Jack\n","Il n'y a pas de bonne ou de mauvaise situation\n","j'ai tout fini chef\n","Je suis vengeance\n","Konnichiwa\n","Il est mignon\n","Faut donner sa chance au produit\n","Il fait au plus 2m\n","Un petit pokemon\n"};
    //on demande à l'utilisateur la phrase qu'il cherche
    
    
    //definition des pointeurs
    char *ptrtableau = 0;
    char *ptrphrase = &phrase_seach[0];
 
    for (i=0;i<10;i++){  //on parcourt toutes les phrases du tableau
        ptrtableau=tableau[i]; //on place le pointeur sur le premier caractere de la phrase
        verif=1;
        ptrphrase = &phrase_seach[0];
        while ((*ptrtableau!=0) && (*ptrphrase!=0)){  //on parcourt les phrases jusqu'à ce que l'une soit finie
            if(*ptrtableau!=*ptrphrase){  //Si les deux lettres sont differentes
                verif=0; //les phrases sont differentes
            }
            ptrtableau++; //on passe à la lettre suivante
            ptrphrase++; //on passe à la lettre suivante
            
        }
        if ((*ptrtableau!=0) || (*ptrphrase!=0)){  //Si une des phrases se finit avant l'autre
            verif=0;  //les phrases sont differentes
        }
        if (verif==1){  //la phrase est identique a celle testee
            printf("La phrase est dans la liste\n");
            return (0);  //On arrete le programme si on a trouvé la phrase
        }
    }
    printf("La phrase n'est pas dans la liste\n");     //Le programme n'a pas été arrêté donc la phrase n'a pas été trouvée
    
    return 0;
}