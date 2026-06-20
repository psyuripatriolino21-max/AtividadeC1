/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-53: Confirmar saida com 's'

Um programa de cadastro possui um menu simples de opcoes.

Apos cada operacao, o sistema deve perguntar se o usuario deseja sair. O menu continuara aparecendo ate que o usuario digite a letra "s".
*/
#include <stdio.h>

int main() {
    char op;

    do {
        printf("Menu executado\n");
        printf("Deseja sair? (s/n): ");
        scanf(" %c", &op);

    } while(op != 's' && op != 'S');

    return 0;
}
