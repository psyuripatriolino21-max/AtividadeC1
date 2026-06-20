/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-22: Par ou impar

Em um jogo educativo, o participante digita um numero para descobrir sua classificacao.

O programa deve verificar se o numero informado e par ou impar.
*/
#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Par");
    else
        printf("Impar");

    return 0;
}
