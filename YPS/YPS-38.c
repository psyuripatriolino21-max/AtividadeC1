/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-38: Senha correta

Um sistema de acesso precisa garantir que apenas usuarios autorizados entrem.

O programa deve solicitar a senha repetidamente ate que o usuario digite a senha correta.
*/
#include <stdio.h>

int main() {
    int senha;

    while(1) {
        scanf("%d", &senha);

        if(senha == 1234)
            break;

        printf("Senha incorreta\n");
    }

    printf("Acesso liberado");

    return 0;
}
