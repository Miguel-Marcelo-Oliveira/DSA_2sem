#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char nome[50];
    float preco;
} Produto;

int main(void)
{
    // mercado --> manteiga, margarina, danone, yogurt, etc...
    Produto produto[4];

    produto[0].id = 123;
    strcpy(produto[0].nome, "manteiga");
    produto[0].preco = 15;

    printf("--- Produto Cadastrados ---\n");
    printf("Nome do Produto | ID | Preço\n");
    printf("%s | %d | R$ %.2f", produto[0].nome, produto[0].id, produto[0].preco);

    return 0;
}