#include <stdio.h>

int main() {
    int nombre, i;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    for (i = 2; i <= nombre; i += 2) {
        printf("%d ", i);
    }

    return 0;
}