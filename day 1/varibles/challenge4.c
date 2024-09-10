#include <stdio.h>
#include <string.h>

int main() {
float km ,yards;
const float  k=1093.61;
printf("Donnez la distance en km :");
scanf("%f",&km);
    yards=km * k;
printf("la distance %.2f ne donner %.2f yards",km,yards);
    return 0;
    
}
