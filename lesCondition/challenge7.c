#include <stdio.h>
int main() {
    char ch;

    printf("Entrez un caractère : ");
    scanf("%c", &ch);

    int valeurASCII = ch;

    if (valeurASCII >= 65 && valeurASCII <= 90) {
        printf("%c est une lettre majuscule.\n", ch);
    } else {
        printf("%c n'est pas une lettre majuscule.\n", ch);
    }

    return 0;
};