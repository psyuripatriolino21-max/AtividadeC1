/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-47: Tabuada de um numero

Um estudante quer praticar multiplicacao usando a estrutura do...while.

O programa deve receber um numero e exibir sua tabuada de 1 ate 10.
*/
#include <stdio.h>

int main() {
    int n, i = 1;

    scanf("%d", &n);

    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while(i <= 10);

    return 0;
}
