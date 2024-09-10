#include <stdio.h>

int main() {
    float T;
    
    printf("Entrez la température en Celsius : ");
    scanf("%f", &T);
    
    
    if (T < 0) {
        printf("À %.2f°C, l'eau est sous forme solide (", T);
    } else if (T >= 0 && T < 100) {
        printf("À %.2f°C, l'eau est sous forme liquide", T);
    } else {
        printf("À %.2f°C, l'eau est sous forme gazeuse ", T);
    }
    
    return 0;
}