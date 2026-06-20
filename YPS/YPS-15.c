/*
Nome: Yuri Patriolino 
RA: 0027931

YPS-15: /*
Quantas caixas cabem dentro do caminhao

Uma empresa de logistica precisa calcular quantas caixas podem ser transportadas em um caminhao sem ultrapassar o espaco disponivel.

O sistema deve receber as dimensoes do caminhao e das caixas (altura, largura e comprimento) e calcular quantas caixas cabem no interior do veiculo.

O programa devera utilizar variaveis para armazenar os valores e, como teste, o aluno deve digitar os valores fornecidos pelo professor para verificar o resultado do calculo.
*/

#include <stdio.h>

int main() {
    float ac, lc, cc;
    float ax, lx, cx;

    printf("Altura, largura e comprimento do caminhao: ");
    scanf("%f %f %f", &ac, &lc, &cc);

    printf("Altura, largura e comprimento da caixa: ");
    scanf("%f %f %f", &ax, &lx, &cx);

    int qtd = (ac / ax) * (lc / lx) * (cc / cx);

    printf("Quantidade de caixas: %d", qtd);

    return 0;
}
