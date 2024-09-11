#include <stdio.h>
#include <math.h>
int main(){
float x1,x2,y1,y2,z1,z2 ,Distance;
printf("sisier les cordoner de permier point(x1,y1,z1)\n");
scanf("%f,%f,%f",&x1,&y1,&z1);
printf("sisier les cordoner de 2éme point(x2,y2,z2)\n");
scanf("%f,%f,%f",&x2,&y2,&z2);
Distance = sqrt(pow(x2-x2,2)+pow(y2-y1,2)+pow(z2-z1,2));
printf("la destance entre les deux poin est : Distance=%f",Distance);

return 0;


}