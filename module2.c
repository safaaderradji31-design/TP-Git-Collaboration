#include <stdio.h>
#include <string.h>

void module2() {
    char msg[100];
    int decalage = 3; // Décalage classique de César
    printf("Entrez un message à chiffrer (sans espaces) : ");
    scanf("%s", msg);

    for (int i = 0; msg[i] != '\0'; i++) {
        // Chiffrement des lettres minuscules
        if (msg[i] >= 'a' && msg[i] <= 'z') {
            msg[i] = (msg[i] - 'a' + decalage) % 26 + 'a';
        }
        // Chiffrement des lettres majuscules
        else if (msg[i] >= 'A' && msg[i] <= 'Z') {
            msg[i] = (msg[i] - 'A' + decalage) % 26 + 'A';
        }
    }

    printf("Message chiffré : %s\n", msg);
}