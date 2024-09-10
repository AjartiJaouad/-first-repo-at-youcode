#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf(" %c", &caractere);

    if (isalpha(caractere)) {
        if (islower(caractere)) {
            printf("%c est une lettre minuscule.\n", caractere);
        } else {
            printf("%c est une lettre majuscule.\n", caractere);
        }
    } else {
        printf("%c n'est pas une lettre de l'alphabet.\n", caractere);
    }

    return 0;
}