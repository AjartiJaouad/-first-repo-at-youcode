#include <stdio.h>
int main(){
    int base  ,exp,i,rst ;
    printf("donner un base :");
    scanf("%d",&base);
    printf("donne m'exposant :");
    scanf("%d",&exp);
    rst=1;
    for ( i = 1; i <= exp; i++)
    {
        rst =rst * base;
    }
    printf("pour base = %d et exposant = %d, le résultat est  = %d",base,exp,rst);
    return 0;
}