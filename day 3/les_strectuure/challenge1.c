#include <stdio.h>

typedef struct {
    char nom[20];
    char prenom[20];
    int age; 
} Persone;

int main() {
    Persone pers1;

    printf("Donner le nom :\n");
    scanf("%s", pers1.nom);
    printf("Donner le prenom :\n");
    scanf("%s", pers1.prenom);
    printf("Donner l'age :\n");
    scanf("%d", &pers1.age); 

    printf("Les informations de la personne :\n");
    printf("Nom : %s\n", pers1.nom);
    printf("Prenom : %s\n", pers1.prenom);
    printf("Age : %d\n", pers1.age);

    return 0;
}
