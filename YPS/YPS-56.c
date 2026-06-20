/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-56: O Menu do Fast-Food Digital

Voce esta programando o totem de autoatendimento de uma lanchonete. O cliente ve uma tela com as opcoes de combos e digita o numero do seu pedido.

O exercicio: Crie um algoritmo que leia um numero inteiro de 1 a 4 correspondente ao combo escolhido e mostre o nome do prato e o valor:

1: "Combo Hamburguer + Batata + Refri - R$ 30,00"
2: "Combo Pizza Brotinho + Refri - R$ 25,00"
3: "Combo Salada + Suco Natural - R$ 22,00"
4: "Combo Balde de Frango + Molho - R$ 35,00"

Caso digite qualquer outro numero (Default): "Opcao invalida! Escolha de 1 a 4."
*/
#include <stdio.h>

int main() {
    int op;

    scanf("%d", &op);

    switch(op) {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00");
            break;
        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00");
            break;
        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00");
            break;
        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00");
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;
}
