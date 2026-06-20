/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-28: Soma dos 100 primeiros numeros naturais

Uma loja deseja calcular rapidamente a soma de uma sequencia de numeros para um relatorio simples.

O programa deve calcular a soma dos numeros de 1 ate 100 utilizando um laco for.
*/
#include <stdio.h>

int main() {
    int i, soma = 0;

    for(i = 1; i <= 100; i++)
        soma += i;

    printf("Soma = %d", soma);

    return 0;
}
