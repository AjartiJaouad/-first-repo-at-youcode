#include <stdio.h>
int main(){
    int number ,i,somme ;
    printf("donner un nombre :");
    scanf("%d",&number);
    somme=0;
    for ( i = 1; i <= number; i++)
    {
        somme =somme + i;
    }
    printf("la somme de %d est %d",number,somme);
    return 0;
}