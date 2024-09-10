#include <stdio.h>

int main() {
    int nbrCongesAccordes, nbrCongesUtilises, statut, joursRestants;

   
    printf("Gestion des Congés\n");

    
    printf("Entrez le nombre total de jours de congés accordés : ");
    scanf("%d", &nbrCongesAccordes);

   
    printf("Entrez le nombre de jours utilisés : ");
    scanf("%d", &nbrCongesUtilises);

    printf("Entrez le statut de l'employé (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut);

   
    if (nbrCongesUtilises > nbrCongesAccordes) {
        printf("Erreur : Le nombre de jours utilisés dépasse le nombre de jours accordés.\n");
        return 1; 
    }

    
    switch (statut) {
        case 0: // 
            joursRestants = nbrCongesAccordes - nbrCongesUtilises;
            break;

        case 1: // 
            joursRestants = (nbrCongesAccordes / 2) - nbrCongesUtilises;
            break;

        default:
            printf("Statut invalide.\n");
            return 1; 
    }

    printf("Jours restants : %d\n", joursRestants);

    return 0;
}
