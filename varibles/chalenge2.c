#include <stdio.h>
#include <string.h>

int main() {
float Tc ,k;
printf("Donnez la temperature en Celsius :");
scanf("%f",&Tc);
k =Tc + 273.15 ;
printf("le tronasferme de la tempurteur Tc=%.2f ,  en kelvin et Tk= %.2f",Tc,k);
    return 0;
    
}
