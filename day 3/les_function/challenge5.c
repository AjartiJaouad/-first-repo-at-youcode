#include <stdio.h>
int fact(int x){
 if (x == 0){
    return 1;
 }else{
    return x* fact(x-1);
 }
};
int main() {
 int n;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n);
 if (n<0){
    printf("veuiller rntre un nmbre postif");
 }else{
    printf("la factorielle de %d est :%d",n,fact(n));
 }
   
    return 0;
}
