int main() {
    int number, total = 0;

    printf("Entrez un nombre entier : ");
    if (scanf("%d", &number) != 1) {
        printf("Erreur de saisie : veuillez entrer un nombre entier.\n");
        return 1;
    }

    printf("La somme des nombres de 1 à %d est : ", number);
    for (int i = 1; i <= number; i++) {
        total += i;
    }
    printf("%d\n", total);

    return 0;
}