/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-19: Ordem crescente (tres numeros)

Durante uma competicao escolar, tres alunos obtiveram pontuacoes diferentes.

O sistema precisa organizar os valores do menor para o maior para facilitar a classificacao.

O programa deve receber tres numeros e exibi-los em ordem crescente.
*/
#include <stdio.h>

int main() {
    int a, b, c, temp;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("%d %d %d", a, b, c);

    return 0;
}
