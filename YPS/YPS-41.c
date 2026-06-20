/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-41: Numero primo com while

Um estudante deseja verificar se determinado numero e primo utilizando outro tipo de repeticao.

O programa deve testar se o numero possui apenas dois divisores usando while.
*/
#include <stdio.h>

int main() {
    int n, i = 2, primo = 1;

    scanf("%d", &n);

    if(n <= 1)
        primo = 0;

    while(i < n) {
        if(n % i == 0) {
            primo = 0;
            break;
        }
        i++;
    }

    if(primo)
        printf("Primo");
    else
        printf("Nao primo");

    return 0;
}
