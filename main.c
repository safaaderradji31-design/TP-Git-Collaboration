#include <stdio.h>

void module1(); void module2(); void module3();

int main() {
    printf("Application de securite informatique\n");
    int choix;
    printf("1. Verifier mot de passe\n2. Chiffrer un message\n3. Calculer une empreinte\nChoix : ");
    scanf("%d", &choix);
    if (choix == 1) module1();
    else if (choix == 2) module2();
    else if (choix == 3) module3();
    return 0;
}