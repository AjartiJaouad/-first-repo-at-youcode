#include <stdio.h>

int main() {
    int nombre, count;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);
count=0;
    while (nombre != 0) {
        nombre /= 10;
        ++count;
    }

    printf(" Nombre de chiffres = %d\n", count);

    return 0;
}