/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-45: Menu ate escolher sair

Um caixa eletronico simples apresenta opcoes ao usuario.

O programa deve exibir um menu repetidamente ate que a opcao "sair" seja escolhida.
*/
#include <stdio.h>

int main() {
    int op;

    do {
        printf("\n1 - Opcao A");
        printf("\n2 - Opcao B");
        printf("\n0 - Sair\n");

        scanf("%d", &op);

    } while(op != 0);

    return 0;
}
