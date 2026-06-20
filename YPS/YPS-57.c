/*
Nome: Yuri Patriolino De Sousa
RA: 0027931

YPS-57: A Central do Brinquedo Eletronico

Um urso de pelucia eletronico tem um botao central. Cada vez que a crianca aperta o botao, o urso fala uma frase diferente dependendo da cor que acende na sua barriga.

O exercicio: Desenvolva a logica do urso. O algoritmo deve receber uma palavra (texto) com a cor que acendeu e exibir a fala do brinquedo:

"Verde": O urso diz: "Vamos brincar la fora!"
"Amarelo": O urso diz: "Estou ficando com soninho..."
"Vermelho": O urso diz: "Estou com fome, hora do lanche!"

Caso seja outra cor: O urso apenas pisca as luzes (Mensagem: "Cor desconhecida").
*/
#include <stdio.h>
#include <string.h>

int main() {
    char cor[20];

    scanf("%s", cor);

    if(strcmp(cor, "Verde") == 0)
        printf("Vamos brincar la fora!");
    else if(strcmp(cor, "Amarelo") == 0)
        printf("Estou ficando com soninho...");
    else if(strcmp(cor, "Vermelho") == 0)
        printf("Estou com fome, hora do lanche!");
    else
        printf("Cor desconhecida");

    return 0;
}
