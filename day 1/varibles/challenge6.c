#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    
    if (b != 0) {
        printf("a / b = %d\n", a / b);
    } else {
        printf("Erreur!");
    }
    
    return 0;
}
