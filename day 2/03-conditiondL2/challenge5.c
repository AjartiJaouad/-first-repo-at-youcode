#include <stdio.h>

int main() {
    float budget;
    int destination, num_persons;

    printf("Entrez votre budget : ");
    scanf("%f", &budget);

    printf("Entrez votre destination (1: Plage, 2: Montagne, 3: Ville) : ");
    scanf("%d", &destination);

    printf("Entrez le nombre de personnes : ");
    scanf("%d", &num_persons);

    if (budget <= 0 || destination < 1  ||destination > 3 || num_persons <= 0) {
        printf("Valeurs incorrectes.\n");
        return 1;
    }

    if (budget > 1000) {
        printf("Type de voyage : Haut de gamme\n");
    } else if (budget >= 500) {
        printf("Type de voyage : Moyen\n");
    } else {
        printf("Type de voyage : Économique\n");
    }

    switch (destination) {
        case 1:
            printf("Destination : Plage\n");
            break;
        case 2:
            printf("Destination : Montagne\n");
            break;
        case 3:
            printf("Destination : Ville\n");
            break;
        default:
            printf("Destination invalide.\n");
    }

  

    return 0;
}