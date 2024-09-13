#include <stdio.h>

int main() {
    int number;

    printf("Entrez un nombre entier : ");
    if (scanf("%d", &number) != 1) {
        printf("Erreur  : veuillez entrer un nombre entier.\n");
        return 1;
    }

    printf("Les diviseurs de %d sont : ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}