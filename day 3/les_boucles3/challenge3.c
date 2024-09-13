#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre, estPremier;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for (int j = 2; j <= nombre; j++) {
        estPremier = 1; 

        for (int i = 2; i <= j / 2; i++) {
            if (j % i == 0) {
                estPremier = 0;  
                break;
            }
        }


        if (estPremier) {
            printf("%d est premier\n", j);
        }
    }

    return 0;
}
