/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-35: Numeros de Fibonacci (n termos)

Um clube de matematica quer estudar a famosa sequencia de Fibonacci.

O programa deve pedir um valor n e mostrar os primeiros termos da sequencia.
*/
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
