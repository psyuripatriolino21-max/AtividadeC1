/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-46: Contar de 1 a 10

Uma escola esta ensinando estruturas de repeticao para iniciantes em programacao.

O programa deve imprimir os numeros de 1 ate 10, um por linha, utilizando do...while.
*/
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while(i <= 10);

    return 0;
}
