/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-25: Notas e aprovacao

Uma escola deseja automatizar a verificacao das notas dos alunos.

O sistema deve receber a media final do estudante e informar se ele foi aprovado, em recuperacao ou reprovado.
*/
#include <stdio.h>

int main() {
    float media;

    printf("Digite a media: ");
    scanf("%f", &media);

    if (media >= 7)
        printf("Aprovado");
    else if (media >= 5)
        printf("Recuperacao");
    else
        printf("Reprovado");

    return 0;
}
