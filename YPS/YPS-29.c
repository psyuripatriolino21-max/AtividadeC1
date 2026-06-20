/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-29: Numeros pares de 0 a 50

Um jogo educativo precisa mostrar apenas os numeros pares para ensinar matematica basica.

O programa deve exibir todos os numeros pares entre 0 e 50.
*/
#include <stdio.h>

int main() {
    int i;

    for(i = 0; i <= 50; i += 2)
        printf("%d\n", i);

    return 0;
}
