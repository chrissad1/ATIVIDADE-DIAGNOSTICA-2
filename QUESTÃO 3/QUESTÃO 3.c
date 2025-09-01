#include <stdio.h>
#include <locale.h>

int main() {
    int valor, not100, not50, not20, not10, not5, not2;

    printf("Qual valor sera sacado: ");
    scanf("%d", &valor);

    if (valor <= 0 || valor % 2 == 1 && valor % 5 != 0) {
        printf("Erro: o valor nao pode ser sacado.\n");
        return 0; 
    }

    not100 = valor / 100;
    valor = valor % 100;

    not50 = valor / 50;
    valor = valor % 50;

    not20 = valor / 20;
    valor = valor % 20;

    not10 = valor / 10;
    valor = valor % 10;

    not5 = valor / 5;
    valor = valor % 5;

    not2 = valor / 2;
    valor = valor % 2;

    if (not100 > 0) printf("%d nota(s) de 100\n", not100);
    if (not50 > 0)  printf("%d nota(s) de 50\n", not50);
    if (not20 > 0)  printf("%d nota(s) de 20\n", not20);
    if (not10 > 0)  printf("%d nota(s) de 10\n", not10);
    if (not5 > 0)   printf("%d nota(s) de 5\n", not5);
    if (not2 > 0)   printf("%d nota(s) de 2\n", not2);

    return 0;
}
