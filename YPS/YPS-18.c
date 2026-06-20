/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-18: Login simples

Uma escola criou um sistema simples para acesso a biblioteca digital.

O aluno deve informar usuario e senha corretos para entrar no sistema.

O programa deve verificar se os dados digitados estao corretos e mostrar uma mensagem de acesso permitido ou negado.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0)
        printf("Acesso permitido");
    else
        printf("Acesso negado");

    return 0;
}
