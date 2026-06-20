/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-34: Verificar se um numero e primo

Um estudante esta aprendendo sobre numeros primos e quer automatizar a verificacao.

O programa deve receber um numero e informar se ele e primo utilizando for.
*/
#include <stdio.h>

int main() {
    int n, i, primo = 1;

    scanf("%d", &n);

    if(n <= 1)
        primo = 0;

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            primo = 0;
            break;
        }
    }

    if(primo)
        printf("Primo");
    else
        printf("Nao primo");

    return 0;
}
