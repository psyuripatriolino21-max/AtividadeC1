/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-60: O Validador de Dias Uteis

O sistema de catracas de uma empresa precisa saber se um funcionario pode entrar no predio.

No sabado e no domingo a empresa fecha, e a entrada so e permitida de segunda a sexta-feira.

O exercicio: Crie um script que receba um numero de 1 a 7 (onde 1 e Domingo, 2 e Segunda, e assim por diante).

O programa deve agrupar os casos e exibir se e um dia de trabalho ou descanso:

2, 3, 4, 5, 6: Exibir "Dia Util. Acesso liberado para o trabalho."
1, 7: Exibir "Fim de Semana. Predio fechado."
Outros numeros: "Numero de dia invalido."
*/
#include <stdio.h>

int main() {
    int dia;

    scanf("%d", &dia);

    switch(dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.");
            break;

        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.");
            break;

        default:
            printf("Numero de dia invalido.");
    }

    return 0;
}
