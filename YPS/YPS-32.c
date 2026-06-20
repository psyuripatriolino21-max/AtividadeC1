/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-32: Quadrado dos numeros de 1 a 10

Um professor quer demonstrar o conceito de potencia ao quadrado para a turma.

O programa deve mostrar o quadrado de cada numero de 1 ate 10.
*/
#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i++)
        printf("%d² = %d\n", i, i * i);

    return 0;
}
