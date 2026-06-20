/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-50: Numero positivo obrigatorio

Um aplicativo bancario aceita apenas valores positivos para depositos.

O programa deve pedir ao usuario um numero positivo e continuar solicitando enquanto ele digitar valores menores ou iguais a zero.
*/
#include <stdio.h>

int main() {
    int n;

    do {
        scanf("%d", &n);
    } while(n <= 0);

    printf("Numero valido");

    return 0;
}
