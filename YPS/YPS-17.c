/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-17: O Sensor do Parque Tematico

Voce foi contratado para programar o sistema de seguranca de uma nova montanha-russa em um parque de diversoes.

Por motivos de seguranca, existe uma altura minima de 140 centimetros (1,40m) para poder entrar no brinquedo.

Na entrada, ha um sensor digital que mede a altura da crianca em centimetros. O seu trabalho e criar o algoritmo que le essa altura e decide se o painel vai acender a luz verde (liberado) ou a luz vermelha (barrado).
*/

#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura em cm: ");
    scanf("%d", &altura);

    if (altura >= 140)
        printf("Liberado");
    else
        printf("Barrado");

    return 0;
}
