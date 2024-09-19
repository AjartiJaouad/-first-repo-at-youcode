
#include<stdio.h>
typedef struct{
    char nom[30];
    float prix;
    int quantite;
}Produit;

int main(){
    Produit produits[3];
    for(int i=0;i<3;i++){
        printf("produit %d: ",i+1);
        scanf("%s",produits[i].nom);
        printf("prix: ");
        scanf("%f",&produits[i].prix);
        printf("quantite: ");
        scanf("%d",&produits[i].quantite);
        printf("\n");
    }

    printf("affichage des produit: \n");
    for(int i=0;i<3;i++){
        printf("produit%d: %s\tprix%.f\tquantite%d\n",i,produits[i].nom,produits[i].prix,produits[i].quantite);
    }
    return 0;
}