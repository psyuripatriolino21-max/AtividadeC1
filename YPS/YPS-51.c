/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-51: Contagem regressiva de 10 ate 1

Uma corrida escolar utiliza uma contagem regressiva antes da largada.

O programa deve mostrar os numeros de 10 ate 1 em ordem decrescente utilizando do...while.
*/
#include <stdio.h>

int main() {
    int i = 10;

    do {
        printf("%d\n", i);
        i--;
    } while(i >= 1);

    return 0;
}
