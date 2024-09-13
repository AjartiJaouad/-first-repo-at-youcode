#include <stdio.h>


int main() {

int nombre_delemon  ,x,i;
    printf("\n---Affichage les element  d'un tabeleaux---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };
   printf("la rouchreche delement :");
   scanf("%d",&x);

   int c = 0;
    
   
    for (i = 0; i < nombre_delemon; i++) {
        if (T[i] == x) {
            c = 1; 
            break;
        }
    }
    
    if (c) {
        printf("Lelement %d est present dans le tableau.\n", x);
    } else {
        printf("lelement %d n'est pas present dans le tableau.\n", x);
    }
   

    
    return 0;
}