#include<stdio.h>

typedef struct{
    float rayon;
}Cercle;

float aire_cercle(Cercle cer){
    return cer.rayon*cer.rayon*3.14;
}

int main(){
    Cercle cercle1;
    printf("Entrez le rayon: ");
    scanf("%f",&cercle1.rayon);
    printf("aire= %.2f",aire_cercle(cercle1));
    return 0;
}