#include <stdio.h>

int main() {
    int scor, ancie, recompnses;
    float bounus;

   
    printf("Evaluations de performonce\n");

    
    printf("Entrez le socre de performonce de 0 a 100 : ");
    scanf("%d", &scor);

   
    printf("Entrez l'anci,ennte en anneé : ");
    scanf("%d", &ancie);

    printf("Entrez le nombre de recompnse : ");
    scanf("%d", &recompnses);

   bounus=0.;
    if (recompnses == 0) {
    bounus=0.1; 
    }else if(recompnses>=2){
        bounus =0.2;
    }
    if (scor >=90 && ancie>=5){
        printf("Exellente performonce ");
    }else if  (scor >=50 && ancie>=3){
        printf("Bonne performonce ");

    }else{
        printf(" performonce  insufisante ");
    }
    bounus=bounus*100;
   
    printf(" Bonus :%.2f\n", bounus);

    return 0;
}
