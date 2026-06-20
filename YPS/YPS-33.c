/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-33: Multiplos de 3 entre 1 e 30

Um aplicativo educacional deseja destacar os numeros multiplos de 3 para os alunos.

O programa deve listar todos os multiplos de 3 entre 1 e 30.
*/
#include <stdio.h>

int main() {
    int i;

    for(i = 3; i <= 30; i += 3)
        printf("%d\n", i);

    return 0;
}
