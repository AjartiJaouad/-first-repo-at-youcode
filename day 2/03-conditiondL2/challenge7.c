#include <stdio.h>

int main() {
    float revenu, deductions, impots;
    int statut;

    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d", &statut);

    
    if (revenu < 0 || statut < 1||  statut > 3) {
        printf("Valeurs incorrectes.\n");
        return 1;
    }

    
    switch (statut) {
        case 1:
            deductions = 1000;
            break;
        case 2:
            deductions = 2000;
            break;
        case 3:
            deductions = 3000;
            break;
        default:
            printf("Statut fiscal invalide.\n");
            return 1;
    }

    revenu -= deductions;

    if (revenu <= 10000) {
        impots = 0;
    } else if (revenu <= 25000) {
        impots = (revenu - 10000) * 0.1;
    } else {
        impots = 1500 + (revenu - 25000) * 0.3;
    }

    printf("Les impôts à payer sont de %.2f euros.\n", impots);

    return 0;
}