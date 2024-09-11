#include <stdio.h>

int main() {
    int nombre, chiffre, inverse = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    while (nombre != 0) {
        chiffre = nombre % 10;
        inverse = inverse * 10 + chiffre;
        nombre /= 10;
    }

    printf(" lainverse est: %d\n", inverse);

    return 0;
}