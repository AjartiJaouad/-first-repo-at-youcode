#include <stdio.h>
int Max(int x ,int y){
    if (x>y){
       return x;

    }else{
        return y;
    }

};
int main() {
 int max, n1, n2 ;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &n2);
    max =Max(n1,n2);
    printf("la max de deux numbre saiser est :%d",max);

    return 0;
}
