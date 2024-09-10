#include <stdio.h>

int main() {
    float L, l, s;

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &L);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &l);

    s = L * l;

    printf("La surface du rectangle est : %.2f\n", s);

    return 0;
}