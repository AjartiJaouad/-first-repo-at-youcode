#include <stdio.h>


int main() {

int nombre_delemon ,somme=0 ,i;
    printf("\n---Affichage les element  d'un tabeleaux---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };
   for (i=0;i<nombre_delemon;i++){
      somme +=T[i];
 
    
   };
  

   for (i=0;i<nombre_delemon;i++){
    
   printf(" les éléments du tableau  son :T[%d]=%d\n",i,T[i]);
printf(" la soomme est :%d\n",somme);
   };
     

   

    
    return 0;
}