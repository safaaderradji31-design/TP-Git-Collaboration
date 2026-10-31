#include <stdio.h>
#include <string.h>

void module1() {
    char mdp[50];
    printf("Entrez un mot de passe : ");
    scanf("%s", mdp);
    if (strlen(mdp) < 8) printf("Mot de passe faible.\n");
    else printf("Mot de passe robuste.\n");
}