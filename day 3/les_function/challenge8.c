#include <stdio.h>

int parite(int a) {

    if (a % 2 == 0){
return 1;
    }else {
        return 0;
    }
     
}

int main() {
    int x;
    printf("Entrez un nombre: ");
    scanf("%d", &x);

    if (parite(x)) {
        printf("%d est pair.\n", x);
    } else {
        printf("%d est impair.\n", x);
    }

    return 0;
}
