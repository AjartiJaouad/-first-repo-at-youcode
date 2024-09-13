#include <stdio.h>

int main() {
    int number,  count = 0;
    float sum = 0;
    printf("Entrez une série de nombres positifs : ");

    while (1) {
        if (scanf("%d", &number) != 1) {
            printf("Erreur veuillez entrer un nombre entier positif.");
            return 1;
        }

        if (number == 0) {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0) {
        printf("La moyenne des nombres saisis est : %.2f\n", sum / count);
    } else {
        printf("Aucun nombre n'a été saisi.\n");
    }

    return 0;
}