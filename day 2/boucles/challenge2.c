#include <stdio.h>
int main(){
    int number ,i,factorielle ;
    printf("donner un nombre :");
    scanf("%d",&number);
    factorielle = 1;
    for ( i = 1; i <= number; i++)
    {
        factorielle =factorielle * i;
    }
    printf("la facotrielle de %d est %d",number,factorielle);
    return 0;
}