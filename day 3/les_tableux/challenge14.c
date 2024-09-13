#include <stdio.h>


int main() {

int nombre_delemon, i;
    printf("\n---calculer la mouyen---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon];
float somme =0.0,moyen;
   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);
        somme += T[i];
   };

if (nombre_delemon > 0) {
        moyen = somme / nombre_delemon;
        printf("La moyenne des element est : %.2f\n", moyen);
    } else {
        printf("Le elemene nexiiste pas pour lle calculer.\n");
    }

    return 0;


}