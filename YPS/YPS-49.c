/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-49: Pedir senha ate acertar

Uma escola criou um sistema simples para liberar o acesso ao laboratorio de informatica.

O programa deve solicitar a senha do usuario repetidamente ate que ele digite a senha correta (1111).

Quando acertar, o sistema deve mostrar a mensagem "Acesso liberado!".
*/
#include <stdio.h>

int main() {
    int senha;

    do {
        scanf("%d", &senha);
    } while(senha != 1111);

    printf("Acesso liberado!");

    return 0;
}
