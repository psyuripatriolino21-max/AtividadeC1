/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-54: Validar numero entre 1 e 5

Um jogo educativo aceita apenas niveis de dificuldade entre 1 e 5.

O programa deve pedir ao usuario um numero dentro desse intervalo e continuar solicitando enquanto o valor digitado for invalido.
*/
#include <stdio.h>

int main() {
    int n;

    do {
        scanf("%d", &n);
    } while(n < 1 || n > 5);

    printf("Numero valido");

    return 0;
}
