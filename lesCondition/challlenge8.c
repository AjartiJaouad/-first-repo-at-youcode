#include <stdio.h>

int main() {
    float M;

    printf("Entrez votre la moyenne  : ");
    scanf("%f", &M);

    if (M < 10) {
        printf("Recalé.\n");
    } else if (M >= 10 && M < 12) {
        printf("Passable.\n");
    } else if (M >= 12 && M < 14) {
        printf("Assez bien.\n");
    } else if (M >= 14 && M < 16) {
        printf("Bien.\n");
    } else {
        printf("Très bien.\n");
    }

    return 0;
}
