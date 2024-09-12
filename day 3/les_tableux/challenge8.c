#include <stdio.h>


int main() {

int nombre_delemon ,i;
    printf("\n---Affichage les element  d'un tabeleaux---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };
 
   int T_copier[nombre_delemon];
   for (i=0;i<nombre_delemon;i++){

  T_copier[i]=T[i];
    
    

   };
   for (i=0;i<nombre_delemon;i++){

printf("les éléments du tableau original:T[%d] =%d \n ",i,T[i]) ;
   printf("\n les element  tableau copié:T_copier[%d] = %d\n ",i,T_copier[i]);
   }

return 0 ;
}