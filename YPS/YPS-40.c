/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-40: Tabuada com while

Um aluno deseja praticar multiplicacao usando repeticao.

O programa deve receber um numero e mostrar sua tabuada de 1 a 10 utilizando while
*/
#include <stdio.h>

int main() {
    int n, i = 1;

    scanf("%d", &n);

    while(i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
