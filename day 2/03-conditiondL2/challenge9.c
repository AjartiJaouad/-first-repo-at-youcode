#include <stdio.h>

int main() {
    float salaire_base, salaire, prime, prix_heure;
    int nbr_heure_supp, type_poste;

    printf("Entrez votre salaire de base : ");
    scanf("%f", &salaire_base);

    printf("Entrez votre type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d", &type_poste);

    printf("Entrez le prix de l'heure supplémentaire : ");
    scanf("%f", &prix_heure);

    printf("Entrez le nombre d'heures supplémentaires : ");
    scanf("%d", &nbr_heure_supp);

    if (salaire_base <= 0 || type_poste < 1 || type_poste > 2 || nbr_heure_supp < 0) {
        printf("Valeurs incorrectes.\n");
        return 1;
    }
    switch (type_poste) {
        case 1:
            prime = salaire_base * 0.1;
            break;
        case 2:
            prime = salaire_base * 0.2;
            break;
        default:
            printf("Type de poste invalide.\n");
            return 1;
    }

    salaire = salaire_base + nbr_heure_supp * prix_heure * 1.5 + prime;

    printf("Votre salaire est de %.2f euros.\n", salaire);

    return 0;
}