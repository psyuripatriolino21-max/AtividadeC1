/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-16: Multiplo de 3 e/ou 5

Uma lanchonete criou uma promocao especial.

Se o numero do pedido for multiplo de 3, o cliente ganha um refrigerante.
Se for multiplo de 5, ganha uma sobremesa.
Se for multiplo dos dois, ganha os dois brindes.

O programa deve verificar o numero do pedido e informar qual premio o cliente ganhou.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("Ganha refrigerante e sobremesa");
    else if (n % 3 == 0)
        printf("Ganha refrigerante");
    else if (n % 5 == 0)
        printf("Ganha sobremesa");
    else
        printf("Nao ganhou premio");

    return 0;
}
