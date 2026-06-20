/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-58: A Calculadora de Bolso de 4 Operacoes

Voce foi desafiado a criar o motor logico de uma calculadora de bolso bem simples, daquelas que so fazem as quatro operacoes basicas.

O exercicio: O algoritmo deve receber dois numeros reais (ex: 10 e 5) e um caractere representando a operacao matematica ('+', '-', '*', '/').

Use o Switch...Case para analisar o caractere da operacao e exibir o resultado do calculo correspondente.

Caso receba um simbolo diferente dos quatro: Exiba "Operacao matematica nao reconhecida".
*/
#include <stdio.h>

int main() {
    float a, b;
    char op;

    scanf("%f %f %c", &a, &b, &op);

    switch(op) {
        case '+':
            printf("%.2f", a + b);
            break;
        case '-':
            printf("%.2f", a - b);
            break;
        case '*':
            printf("%.2f", a * b);
            break;
        case '/':
            printf("%.2f", a / b);
            break;
        default:
            printf("Operacao matematica nao reconhecida");
    }

    return 0;
}
