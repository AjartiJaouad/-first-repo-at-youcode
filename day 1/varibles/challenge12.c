#include <stdio.h>

int main() {
    int nbr, ch1, ch2, ch3, ch4, inverse;

    printf("Entrez un nombre  : ");
    scanf("%d", &nbr);

    ch1 = nbr % 10; 
    nbr /= 10;
    ch2 = nbr % 10;
    nbr /= 10;
    ch3 = nbr % 10;
    nbr /= 10;
    ch4 = nbr % 10;
    inverse = ch1 * 1000 + ch2 * 100 + ch3 * 10 + ch4;

    printf("Le nombre inversé est : %d", inverse);

    return 0;
}