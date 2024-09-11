#include <stdio.h>

int main() {
    int nombre, somme = 0, chiffre;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    while (nombre != 0) {
        chiffre = nombre % 10;
        somme += chiffre;
        nombre /= 10;
    }

    printf("ma soome \n", somme);

    return 0;
}