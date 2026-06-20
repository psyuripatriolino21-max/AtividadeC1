/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-30: Fatorial de um numero

Um aluno de matematica precisa calcular o fatorial de alguns numeros para resolver exercicios escolares.

O programa deve receber um numero e calcular seu fatorial utilizando for.
*/
#include <stdio.h>

int main() {
    int n, i;
    long long fat = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        fat *= i;

    printf("Fatorial = %lld", fat);

    return 0;
}
