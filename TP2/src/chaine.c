
#include <stdio.h>

int main() {
    char chaine1[] = "Bonjour les amis"; // déclaration d'une chaine de caractères
    char chaine2[] = ", konishiwa!"; // déclaration d'une chaine de caractères
    
    int i = 0;
    int j = 0;
    int k = 0;
    int n = 0;
    int m = 0;
    while (chaine1[i] != '\0') { // On compte le nombre de caractères de la chaine1
        i++;
    }
    while (chaine2[j] != '\0') { // On compte le nombre de caractères de la chaine2
        j++;
    }

    n = i;
    m = j;
    char chaine3[i+j+1];

    for (i = 0; i < n; i++) { // On copie la chaine1 dans la chaine3
        chaine3[i] = chaine1[i];
    }
    for (j = 0; j < m; j++) { // On copie la chaine2 dans la chaine3
        chaine3[i + j] = chaine2[j];
    }

    while (chaine3[k] != '\0') { // On compte le nombre de caractères de la chaine3
        k++;
    }

    printf("La chaine 1 contient %d caractères \n", n);
    printf("La chaine 2 contient %d caractères \n", m);
    printf("La chaine 3 contient %d caractères \n", k);
    printf("La chaine 3 est %s \n", chaine3);
    return 0;
}


