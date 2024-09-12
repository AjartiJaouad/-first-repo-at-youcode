#include <stdio.h>


int main() {

int nombre_delemon ,nmbre_dr_multip ,i;
    printf("\n---Affichage les element  d'un tabeleaux---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };
   printf("dooner le nombre de multiplaction :");
   scanf("%d",&nmbre_dr_multip);

   
   
   for (i=0;i<nombre_delemon;i++){
    T[i]=nmbre_dr_multip*T[i];
    

   };
  for (i=0;i<nombre_delemon;i++){
    
    
   printf(" les éléments du tableau  son avone la multiplaction:T[%d]=%d\n",i,T[i]);

   };

   

    
    return 0;
}