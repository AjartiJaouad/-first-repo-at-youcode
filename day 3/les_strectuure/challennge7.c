#include<stdio.h>

typedef struct{
    int jour,mois,annee;
}Date;

Date creer_date(int j,int m,int a){
    Date date_nouvelle;
    date_nouvelle.jour=j;
    date_nouvelle.mois=m;
    date_nouvelle.annee=a;

    return date_nouvelle;
}

int main(){

    Date date1=creer_date(10,10,2024);
    printf("la date est: %d/%d/%d",date1.jour,date1.mois,date1.annee);

    return 0;
}