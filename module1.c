#include <stdio.h>
#include <string.h>
#include <ctype.h>

void module1() {
    char mdp[50];
    int a_chiffre = 0;
    
    printf("Entrez un mot de passe : ");
    scanf("%s", mdp);
    
    for (int i = 0; mdp[i] != '\0'; i++) {
        if (isdigit(mdp[i])) {
            a_chiffre = 1;
        }
    }
    
    if (strlen(mdp) < 8) {
        printf("Mot de passe faible : trop court.\n");
    } else if (!a_chiffre) {
        printf("Mot de passe moyen : il manque un chiffre.\n");
    } else {
        printf("Mot de passe robuste.\n");
    }
}