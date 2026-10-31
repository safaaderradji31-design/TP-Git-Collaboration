#include <stdio.h>

void module3() {
    char txt[100];
    printf("Entrez un texte pour l'empreinte : ");
    scanf("%s", txt);
    int hash = 0;
    for (int i = 0; txt[i] != '\0'; i++) hash += txt[i] * (i + 1);
    printf("Empreinte calculee : %d\n", hash);
}