#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float longueur,largeur;
} Rectangle;

int main() {
    float AR;
    Rectangle rect;

    printf("Saisir la longueur de votre rectangle : \n");
    scanf("%f", &rect.longueur);

    printf("Saisir la largeur de votre rectangle : \n");
    scanf("%f", &rect.largeur);

    AR = rect.largeur * rect.longueur;

    printf("L'aire du rectangle est : %.2f\n", AR);

    return 0;
}
