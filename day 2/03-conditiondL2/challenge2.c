#include <stdio.h>

int main() {
    int Age, NumbreDeac, typVoituer;
    float PrimddeBas, Prime;

    printf("Calcul de Prime d'Assurance Auto\n");
    printf("Entrez votre Prime de base: ");
    scanf("%f", &PrimddeBas);
    printf("Entrez votre âge du conducteur: ");
    scanf("%d", &Age);
    printf("Entrez le type de voiture (1, 2 ou 3): ");
    scanf("%d", &typVoituer);
    printf("Entrez le nombre d'accidents au cours des 5 dernières années: ");
    scanf("%d", &NumbreDeac);

    if (Age < 25) {
        Prime = PrimddeBas * 1.5;
    } else if (Age <= 65) {
        Prime = PrimddeBas;
    } else {
        Prime = PrimddeBas * 1.2;
    }

    switch (typVoituer) {
        case 1: 
            Prime = Prime * 2;
            break;
        case 2: 
            Prime = Prime * 1.2;
            break;
        case 3: 
            Prime = Prime * 1.1;
            break;
        default:
            printf("Type de voiture invalide.\n");
            return 1; 
    }

    
    if (NumbreDeac > 1) {
        Prime = Prime + PrimddeBas * 1.3;
    }

    printf("Prime: %.2f\n", Prime);

    return 0;
}
