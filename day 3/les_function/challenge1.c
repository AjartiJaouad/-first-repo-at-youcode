#include <stdio.h>
int somme(int x ,int y){
    return x+y;

};
int main() {
 int n1, n2, rs;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &n2);
    rs = somme(n1,n2);
    printf("la somme de deux numbre saiser est :%d",rs);

    return 0;
}
