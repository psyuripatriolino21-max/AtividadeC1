/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-55: Ler numeros e mostrar o maior (ate digitar negativo)

Uma pesquisa escolar registra notas positivas dos participantes.

O programa deve continuar recebendo numeros ate que um valor negativo seja digitado. Ao final, deve mostrar qual foi o maior numero positivo informado.
*/
#include <stdio.h>

int main() {
    int n, maior = 0;

    do {
        scanf("%d", &n);

        if(n > maior)
            maior = n;

    } while(n >= 0);

    printf("Maior numero: %d", maior);

    return 0;
}
