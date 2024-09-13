#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    
    printf("Veuillez entrer un nombre entier : ");
    scanf("%d", &n);

    for (int i = 10; i > 0; i--) {
        printf("%d x %d = %d\n", n, i, i * n);
    }
    
    return 0;
}
