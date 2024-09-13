#include <stdio.h>
int prod(int x ,int y){
    return x*y;

};
int main() {
 int n1, n2, rs;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &n2);
    rs = prod(n1,n2);
    printf("le prdoduit  de deux numbre saiser est :%d",rs);

    return 0;
}
