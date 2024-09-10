#include <stdio.h>

int main() {
    int nbr;

    printf("Entrez un nombre : ");
    scanf("%d", &nbr);

    if (nbr > 0) {
        printf("%d est un nombre positif.", nbr);
    } else if (nbr < 0) {
        printf("%d est un nombre négatif", nbr);
    } else {
        printf("%d est un numbrre nul", nbr);
    }

    return 0;
}