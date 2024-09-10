#include <stdio.h>

int main() {
    int nbr;

    printf(" vouilller Entrez un nombre : ");
    scanf("%d", &nbr);

    if (nbr % 2 == 0) {
        printf("%d est un nombre pair", nbr);
    } else {
        printf("%d est un nombre impair.\n", nbr);
    }

    return 0;
}