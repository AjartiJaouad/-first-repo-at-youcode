#include <stdio.h>

int main() {
    int n1, n2, la_somme;

    
    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &n2);

    la_somme = n1 + n2;

   
    if (n1 == n2) {
        la_somme *= 3; 
        printf("Les deux nombres sont égaux. Le triple de leur somme est : %d", la_somme);
    } else {
        printf("La somme des deux nombres est : %d", la_somme);
    }

    return 0;
}