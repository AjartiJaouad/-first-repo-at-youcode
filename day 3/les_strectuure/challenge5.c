#include <string.h>
#include <stdio.h>

typedef struct {
    char titre[20];
    char auteur[20];
    int annee;
} Livre;

Livre creerLivre() {
    Livre livre1 = {"la boit amervail", "ahmed safrioui", 14562};
    return livre1;
}

int main() {
    Livre livre1 = creerLivre();

    printf("%s est crier par %s, et publi en %d\n", livre1.titre, livre1.auteur, livre1.annee);

    return 0;
}
