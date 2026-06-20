/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-21: Numero positivo ou negativo

Um aplicativo financeiro registra lucros e prejuizos.

Valores positivos representam lucro e valores negativos representam prejuizo.

O programa deve receber um numero e informar se ele e positivo, negativo ou zero.
*/
#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Positivo");
    else if (n < 0)
        printf("Negativo");
    else
        printf("Zero");

    return 0;
}
