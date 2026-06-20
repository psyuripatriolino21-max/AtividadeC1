/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-43: Soma dos pares entre 1 e 100

Um professor propos um desafio para calcular apenas os numeros pares de uma sequencia.

O programa deve somar todos os numeros pares entre 1 e 100 utilizando while.
*/
#include <stdio.h>

int main() {
    int i = 2, soma = 0;

    while(i <= 100) {
        soma += i;
        i += 2;
    }

    printf("Soma = %d", soma);

    return 0;
}
