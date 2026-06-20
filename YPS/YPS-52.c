/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-52: Soma ate o numero ser multiplo de 10

Um sistema de pontuacao recebe varios valores digitados pelo usuario.

Os numeros devem ser somados continuamente ate que seja digitado um numero multiplo de 10. Ao final, o programa deve mostrar a soma total dos valores informados
*/
#include <stdio.h>

int main() {
    int n, soma = 0;

    do {
        scanf("%d", &n);
        soma += n;
    } while(n % 10 != 0);

    printf("Soma = %d", soma);

    return 0;
}
