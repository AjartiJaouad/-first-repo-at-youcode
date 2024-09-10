#include <stdio.h>
#include <math.h>

int main() {
    float r, v;
    const float pi = 3.14159;

    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &r);

    v = (4.0 / 3.0) * pi * pow(r, 3);

    printf("Le volume de la sphère est : %.2f\n", v);

    return 0;
}