#include <stdio.h>


int main() {

int nombre_delemon ,max ,i;
    printf("\n---Affichage les element  d'un tabeleaux---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };
   max=T[0];
   for (i=0;i<nombre_delemon;i++){
   
   if (max <=T[i]){
    max=T[i];
   }
    
   };
  

   for (i=0;i<nombre_delemon;i++){
    
   printf(" les éléments du tableau  son :T[%d]=%d\n",i,T[i]);
printf(" la max de elelment de tableux est :%d\n",max);
   };
     

   

    
    return 0;
}