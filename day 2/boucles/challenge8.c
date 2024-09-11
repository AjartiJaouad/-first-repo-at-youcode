#include <stdio.h>

int main() {
    int n, f0 = 0, f1 = 1, fx;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Le nombre doit être positif.\n");
        return 1;
    }

    if (n == 0) {
        printf("f(0) = 0\n");
    } else if (n == 1) {
        printf("f(1) = 1\n");
    } else {
        for (int i = 2; i <= n; ++i) {
            fx = f0 + f1;
            f0 = f1;
            f1 = fx;
        }
        printf("f(%d) = %d\n", n, fx);
    }

    return 0;
}
