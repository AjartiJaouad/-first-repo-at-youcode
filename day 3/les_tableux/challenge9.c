#include <stdio.h>


int main() {

int nombre_delemon ,i;
    printf("\n---Affichage les element  d'un tabeleaux---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon],T_inversee[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };
  
  
for(int i=0 ; i<nombre_delemon ; i++){
        T_inversee[nombre_delemon-i-1] = T[i] ;
    }

    
    for(int i=0 ; i<nombre_delemon ; i++){
        printf("T[%d] = %d et T_inversse[%d] = %d et  \n", i , T[i], i , T_inversee[i]);
    }
   

return 0 ;
}