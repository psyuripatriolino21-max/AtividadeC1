/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-31: Contagem regressiva

Uma competicao escolar utiliza uma contagem regressiva antes da largada.

O programa deve mostrar os numeros de 10 ate 1 na tela.
*/
#include <stdio.h>

int main() {
    int i;

    for(i = 10; i >= 1; i--)
        printf("%d\n", i);

    return 0;
}
