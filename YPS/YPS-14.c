/*
Nome: Yuri Patriolino 
RA: 0027931

YPS-14: /*
Tipo de Triângulo

Uma fábrica de estruturas metálicas produz suportes em formato de triângulo para eventos e construções.

Antes da fabricação, o sistema precisa verificar o tipo do triângulo com base nas medidas informadas pelo operador.

O programa deve receber os três lados do triângulo e informar se ele é:

Equilátero -> todos os lados iguais;
Isósceles -> dois lados iguais;
Escaleno -> todos os lados diferentes.
*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilatero");
    else if (a == b || a == c || b == c)
        printf("Isosceles");
    else
        printf("Escaleno");

    return 0;
}
