#include <stdio.h>
int main(){
    int number ,i;
    printf("donner un nombre :");
    scanf("%d",&number);
    for ( i = 1; i <=10; i++)
    {
        /* code */printf("%d x %d = %d",number,i,number*i);
    }
    return 0;
}