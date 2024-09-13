#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre, inverse = 0, chiffre, nombreInitial;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    nombreInitial = nombre;

    while (nombre != 0) {
        chiffre = nombre % 10; 
        inverse = inverse * 10 + chiffre;  
        nombre = nombre / 10;  
    }

    printf("\nL'inverse de %d est %d.\n", nombreInitial, inverse);

    return 0;
}
