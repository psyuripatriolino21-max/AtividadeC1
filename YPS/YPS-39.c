/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-39: Verificar se um numero e positivo

Um sistema financeiro so aceita valores positivos para cadastro.

O programa deve continuar pedindo numeros ate que o usuario digite um numero positivo.
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
