/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-44: Contar digitos de um numero

Um sistema bancario deseja identificar quantos digitos possui um numero informado.

O programa deve receber um numero positivo e mostrar quantos digitos ele possui.
*/
#include <stdio.h>

int main() {
    int n, cont = 0;

    scanf("%d", &n);

    while(n > 0) {
        cont++;
        n /= 10;
    }

    printf("Digitos: %d", cont);

    return 0;
}
