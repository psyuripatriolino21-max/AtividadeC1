/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-24: Pode votar?

Um sistema de cadastro eleitoral precisa verificar se uma pessoa ja possui idade para votar.

O usuario informa sua idade, e o programa deve dizer se ele pode ou nao votar.
*/
#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("Pode votar");
    else
        printf("Nao pode votar");

    return 0;
}
