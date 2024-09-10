#include <stdio.h>
#include <string.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char email[100];
    
    printf("Entrez votre nom : ");
    scanf("%s",nom);

    
    printf("Entrez votre prénom : ");
    scanf("%s",prenom);

    printf("Entrez votre âge : ");
    scanf("%d", &age);
 
 
    printf("Entrez votre sexe (M/F) : ");
    scanf("%s",sexe);
    
    printf("Entrez votre adresse e-mail : ");
    scanf("%s",email);

    
    
    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Adresse e-mail : %s\n", email);
    
    return 0;
}
