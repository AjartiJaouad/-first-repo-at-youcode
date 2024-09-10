#include <stdio.h>
int main (){
    float Renvenu ;
    int Score_de_credit ,Duree_du_pret;
    printf("Evaluation d'un Prét\n");
    printf("entrer voutre renvenu :");
    scanf("%f",&Renvenu);
    printf("entrer voutre sccpore de crédite :");
    scanf("%d",&Score_de_credit);
    printf("entrer voutre durré du prreeéét  :");
    scanf("%d",&Duree_du_pret);
    if (Renvenu>=30000 && Score_de_credit>=700 && Duree_du_pret<=10 ){
        printf("Eligible");
    }else if (Renvenu>=30000 && Score_de_credit>=650 && Duree_du_pret<=15 ){
        printf("Eligible avec condition");
    }else {
        printf("non Eligble");


    }
    return 0;
}