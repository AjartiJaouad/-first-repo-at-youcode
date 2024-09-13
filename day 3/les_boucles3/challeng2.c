#include <stdio.h>

int main() {
    int nombreLignes, estPremier, diviseur, nombreEtoiles = 2;

    
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &nombreLignes);

    int ligneActuelle = 0; 

   
    while (ligneActuelle < nombreLignes) {
      
        estPremier = 1; 
        for (diviseur = 2; diviseur * diviseur <= nombreEtoiles; diviseur++) {
            if (nombreEtoiles % diviseur == 0) {
                estPremier = 0;  
                break;
            }
        }

       
        if (estPremier) {
            
            for (int j = 0; j < nombreLignes - ligneActuelle - 1; j++) {
                printf(" ");
            }

           
            for (int j = 0; j < nombreEtoiles; j++) {
                printf("*");
            }

           
            printf("\n");
            ligneActuelle++;  
        }

       
        nombreEtoiles++;
    }

    return 0;
}
