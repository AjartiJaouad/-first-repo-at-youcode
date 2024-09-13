#include <stdio.h>


int main() {

int nombre_delemon,v1,v2 ,i;
    printf("\n---Romplcer un elelment---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon],T_inversee[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };
  printf("donner la valeurr remplace");
  scanf("%d",&v1);
  printf("donner la nouvelle valeur");
  scanf("%d",&v2);
  
for(int i=0 ; i<nombre_delemon ; i++){
        if(T[i] == v1 ){
            T[i] = v2;
        }
    }

    printf("Le tableau après remplacement :\n");
    for (i = 0; i < nombre_delemon; i++) {
        printf("%d ", T[i]);
    }

return 0 ;
}