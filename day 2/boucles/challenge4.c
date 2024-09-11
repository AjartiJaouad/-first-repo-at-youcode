#include <stdio.h>
int main(){
    int number ,i ;
    printf("donner un nombre :");
    scanf("%d",&number);
    
    for ( i = 1; i <= number; i+=2)
    {
        printf("%d",i);
    }
    
    return 0;
}