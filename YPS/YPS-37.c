/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-37: Soma de numeros ate digitar zero

Um caixa simples de mercado precisa somar valores digitados pelo operador.

O programa deve continuar recebendo numeros ate que o usuario digite 0 e, ao final, mostrar a soma total.
*/
#include <stdio.h>

int main() {
    int n, soma = 0;

    do {
        scanf("%d", &n);
        soma += n;
    } while(n != 0);

    printf("Soma = %d", soma);

    return 0;
}
