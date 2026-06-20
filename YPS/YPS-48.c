/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-48: Menu com opcao de sair

Fac¸a um programa mostrando um menu de opcoes. Ele fica pedindo para o usuario escolher entre duas opcoes (digitar 1 para mostrar uma mensagem ou 2 para sair) ate que o usuario escolha a opcao 2.

O programa exibe o menu com as opcoes: "1 - Mensagem" ou "2 - Sair".
Se o usuario escolher 1, ele imprime a mensagem "Voce escolheu a mensagem!".
O programa continuara executando o menu ate que o usuario escolha 2 para sair
*/
#include <stdio.h>

int main() {
    int op;

    do {
        printf("\n1 - Mensagem");
        printf("\n2 - Sair\n");

        scanf("%d", &op);

        if(op == 1)
            printf("Voce escolheu a mensagem!\n");

    } while(op != 2);

    return 0;
}
