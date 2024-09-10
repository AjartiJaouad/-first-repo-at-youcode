#include <stdio.h>
#include <string.h>

int main() {
    int jour, mois, annee;
    char *mois_en_lettres[] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
                              "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"};

    printf("Entrez une date au format JJ/MM/AAAA : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    if (mois >= 1 && mois <= 12) {
        printf("La date au format JJ-NomDuMois-AAAA est : %d-%s-%d\n",
               jour, mois_en_lettres[mois - 1], annee);
    } else {
        printf("Le mois entré est invalide.\n");
    }

    return 0;
}