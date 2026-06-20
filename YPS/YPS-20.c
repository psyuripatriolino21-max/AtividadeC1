/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-20: Ano bissexto

Uma agenda digital precisa descobrir se determinado ano tera 366 dias.

O usuario informa um ano, e o programa deve verificar se ele e bissexto ou nao.
*/
#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("Ano bissexto");
    else
        printf("Ano nao bissexto");

    return 0;
}
