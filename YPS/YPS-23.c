/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-23: Maior de dois numeros

Dois atletas registraram suas pontuacoes em uma prova.

O sistema precisa identificar qual foi a maior pontuacao.

O programa deve receber dois numeros e mostrar qual deles e o maior.
*/
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maior: %d", a);
    else
        printf("Maior: %d", b);

    return 0;
}
