#include <stdio.h>

int main() {
    int age, historique_medical;

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur) : ");
    scanf("%d", &historique_medical);

    if (age < 0 || historique_medical < 0 || historique_medical > 2) {
        printf("Valeurs incorrectes.\n");
        return 1;
    }

    if (age < 30 || historique_medical == 0) {
        printf("Plan de base.\n");
    } else if (historique_medical == 1) {
        printf("Plan étendu.\n");
    } else {
        printf("Plan étendu avec couverture supplémentaire pour les problèmes majeurs.\n");
    }

    return 0;
}