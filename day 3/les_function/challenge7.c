#include <stdio.h>
#include <string.h>

void inversion_chaine(char T[], int N) {
    char tmp;
    for (int i = 0; i < N / 2; i++) {
        tmp = T[i];
        T[i] = T[N - 1 - i];
        T[N - 1 - i] = tmp;
    }
}

int main() {
    char Chaine[30];
    printf("Entrez votre chaîne: ");
    scanf("%29s", Chaine);  
    inversion_chaine(Chaine, strlen(Chaine));
    printf("La chaîne inversée: %s\n", Chaine);  

    return 0;
}
