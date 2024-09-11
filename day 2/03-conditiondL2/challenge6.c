#include <stdio.h>

int main() {
    float consommation, prix_kwh;
    int type_utilisateur, type_contrat;

    printf("Entrez la consommation (en kWh) : ");
    scanf("%f", &consommation);

    printf("Entrez le type d'utilisateur (1 pour résidentiel, 2 pour commercial) : ");
    scanf("%d", &type_utilisateur);

    printf("Entrez le type de contrat (0 pour standard, 1 pour réduit) : ");
    scanf("%d", &type_contrat);


    if (consommation <= 0  || type_utilisateur < 1  || type_utilisateur > 2 || type_contrat < 0 || type_contrat > 1) {
        printf("Valeurs incorrectes.\n");
        return 1;
    }

    
    if (type_utilisateur == 1) {
        prix_kwh = (type_contrat == 0) ? 0.20 : 0.15;
    } else {
        prix_kwh = (type_contrat == 0) ? 0.30 : 0.25;
    }

    
    float cout = consommation * prix_kwh;
    if (consommation > 500) {
        cout *= 1.1;
    }

    printf("Le coût total est de %.2f euros.\n", cout);

    return 0;
}