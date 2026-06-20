/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-27: Tabuada de um numero

Um estudante esta treinando matematica e deseja visualizar rapidamente a tabuada de um numero.

O programa deve receber um numero digitado pelo usuario e mostrar sua tabuada de 1 a 10 usando for.
*/
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
