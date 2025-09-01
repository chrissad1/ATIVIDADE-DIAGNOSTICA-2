#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero_secreto, palpite;
    
    numero_secreto = rand() % 100;

    printf("Chute um numero entre 0 e 100: ");
    scanf ("%d",&palpite);

    if (palpite == numero_secreto)
    {
        printf("Voce acertou!");
    }
    else if (palpite > numero_secreto)
    {
        printf("numero muito alto");
    }
    else
    {
        printf("numero muito baixo");
    }
    
    return 0;
}