#include <stdio.h>

typedef struct {
    char nom[50];
    char prenom[50];
    int notes[5];  
} Etudiant;

int main() {
    Etudiant etudiant;

    printf("Entrez le nom de l'etudiant : ");
    fgets(etudiant.nom, sizeof(etudiant.nom), stdin);  
    printf("Entrez le prénom de l'etudiant : ");
    fgets(etudiant.prenom, sizeof(etudiant.prenom), stdin);  

    for (int i = 0; i < 5; i++) {
        printf("Entrez la note %d : ", i + 1);
        scanf("%d", &etudiant.notes[i]);  
    }

    printf("\nInformations de l'etudiant :\n");
    printf("Nom : %s", etudiant.nom);
    printf("Prénom : %s", etudiant.prenom);

    printf("Notes : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");

    return 0;
}
