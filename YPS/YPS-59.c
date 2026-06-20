/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-59: O Assistente de Direcao (GPS Sem Mapa)

Um robo de entregas autonomo esta andando por uma fabrica. Ele le placas com letras que indicam para qual direcao ele deve virar nas esquinas dos corredores.

O exercicio: Faca um programa que leia uma letra maiuscula digitada e exiba o comando de voz do robo:

'N': "Seguir para o Norte."
'S': "Seguir para o Sul."
'L': "Virar a Leste (Direita)."
'O': "Virar para Oeste (Esquerda)."

Qualquer outra letra: "Comando invalido! Pare o robo."
*/
#include <stdio.h>

int main() {
    char dir;

    scanf(" %c", &dir);

    switch(dir) {
        case 'N':
            printf("Seguir para o Norte.");
            break;
        case 'S':
            printf("Seguir para o Sul.");
            break;
        case 'L':
            printf("Virar a Leste (Direita).");
            break;
        case 'O':
            printf("Virar a Oeste (Esquerda).");
            break;
        default:
            printf("Comando invalido! Pare o robo.");
    }

    return 0;
}
