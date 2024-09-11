#include <stdio.h>

int main() {
    int num, binaryNum[32], i = 0;

    printf("Entrez un nombre decimal : ");
    scanf("%d", &num);

    printf("Le nombre en hexadecimal est : %x\n", num);

    while (num > 0) {
        binaryNum[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Le nombre en binaire est : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}