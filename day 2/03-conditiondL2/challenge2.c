#include <stdio.h>
int main (){
    int Age , NumbreDeac  ,typVoituer;
    float PrimddeBas ,Prime;
     
    printf(" Calcule de Prime d'Assurance Aouto\n");
    printf(" voutre Primedebas");
    scanf("%f",&PrimddeBas);
    printf("entrer voutre Age du conducteur  :");
    scanf("%d",&Age);
    printf("entrer voutre typ devoitueur  :");
    scanf("%d",&typVoituer);
    printf("entrer le nombre d'adccidents  au cours de 5 déernier anneées  :");
    scanf("%d",&NumbreDeac);
    if (Age<25){
      
      Prime=PrimddeBas*1.5;

    }else if (Age<=65) {
      Prime=PrimddeBas;

    }else{
              Prime=PrimddeBas*1.2;

    };
    switch (typVoituer)
    {
    case '1'  :Prime=Prime*2;
        
        break;
    case '2'  :Prime=Prime*1.2;
        
        break;
    case '3'  :Prime=Prime*1.1;
        
        break;
    
    default:
        break;
    };
    if (NumbreDeac>1){
        Prime=Prime+PrimddeBas*1.3;
    }
    printf("Prime:%f",Prime);
 
    return 0;
}