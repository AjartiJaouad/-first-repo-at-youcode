#include <stdio.h>

int main() {
    char ch;

    printf("vullier entrer un caractère : ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle", ch);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", ch);
    }

    return 0;
}