#include <stdio.h>

void module2() {
    char msg[100];
    printf("Entrez un message a chiffrer : ");
    scanf("%s", msg);
    for (int i = 0; msg[i] != '\0'; i++) {
        if (msg[i] >= 'a' && msg[i] <= 'z') msg[i] = (msg[i] - 'a' + 3) % 26 + 'a';
    }
    printf("Message chiffre : %s\n", msg);
}