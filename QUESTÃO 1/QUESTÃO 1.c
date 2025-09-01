#include <stdio.h>
#include <locale.h>

int main() {
    double a, b, c;

    printf("Digite os tres lados do triangulo:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        printf("Os valores formam um triangulo valido.\n");

        if (a == b && b == c) {
            printf("Tipo: Equilatero (todos os lados iguais)\n");
        } else if (a == b || a == c || b == c) {
            printf("Tipo: Isosceles (dois lados iguais)\n");
        } else {
            printf("Tipo: Escaleno (todos os lados diferentes)\n");
        }
    } 

    return 0;
}
