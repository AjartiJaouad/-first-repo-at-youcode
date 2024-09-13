#include <stdio.h>

int main() {
    int number;

    printf("Entrez le nombre de termes : ");
    if (scanf("%d", &number) != 1) {
        printf(" eurour veuillez entrer un nombre entier");
        return 1;
    }

    printf("Les %d premiers termes de la suite de Fibonacci sont : ", number);

    int a = 0, b = 1, next;
    for (int i = 0; i < number; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }

    return 0;
}