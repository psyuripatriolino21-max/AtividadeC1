/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-42: Quantidade de numeros impares digitados

Uma pesquisa escolar precisa analisar numeros digitados pelos participantes.

O programa deve pedir 10 numeros e informar quantos deles sao impares.
*/
#include <stdio.h>

int main() {
    int n, i = 1, cont = 0;

    while(i <= 10) {
        scanf("%d", &n);

        if(n % 2 != 0)
            cont++;

        i++;
    }

    printf("Quantidade de impares: %d", cont);

    return 0;
}
