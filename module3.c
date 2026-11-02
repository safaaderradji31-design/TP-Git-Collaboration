#include <stdio.h>

void module3() {
    char txt[100];
    printf("Entrez un texte pour l'empreinte : ");
    scanf("%s", txt);
    unsigned int hash = 0;
    for (int i = 0; txt[i] != '\0'; i++) hash += txt[i] * (i + 1);
    printf("Empreinte calculee : %u\n", hash);
    printf("Longueur du texte : %lu caracteres.\n", strlen(txt));
}