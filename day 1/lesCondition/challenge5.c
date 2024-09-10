#include <stdio.h>

int main() {
    int annee, M, j, h, min, s;
    int choix;

    printf("1. Convertir en mois");
    printf("2. Convertir en jours");
        printf("votre choix : ");
    scanf("%d", &choix);
    printf("Entrez l'année : ");
    scanf("%d", &annee);
    switch (choix) {
        case 1:
            M = annee * 12;
            printf("%d années équivalent à %d mois.\n", annee, M);
            break;
        default:
            printf("Choix invalide");
    }

    return 0;
}