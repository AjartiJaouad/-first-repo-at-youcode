#include <stdio.h>


int main() {

int nombre_delemon, i;
    printf("\n---Afficher les element Paire---\n");
    printf("lentrer le nombre délemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon],T_inversee[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };

  printf("les elements im paire sont:");
int c = 0; 

    for (i = 0; i < nombre_delemon; i++) {
        if (T[i] % 2 != 0) {
            printf("%d ", T[i]);
            c = 1;
        };
    };

    if (!c) {
        printf("Aucun element.");
    };

}