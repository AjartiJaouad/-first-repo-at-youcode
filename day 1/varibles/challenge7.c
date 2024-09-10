#include <stdio.h>
int main(){
float n1,n2,n3, Moyen;
 
printf("entre le 1ére numbre :");
scanf("%f",&n1);
printf("entre le 2éme numbre :");
scanf("%f",&n2);
printf("entre le 3éme numbre :");
scanf("%f",&n3);

Moyen = ((n1*2 )+( n2*3) +(n3*5))/10;
printf("la moyen ponderer = %.2f",Moyen);

return 0;


}