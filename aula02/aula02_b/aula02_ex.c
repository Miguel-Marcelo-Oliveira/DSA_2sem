#include <stdio.h>

typedef struct
{
    int id;        // 4 bytes
    char nome[20]; // 20 bytes
    float preco;   // 4bytes
} Produto;

void aplicar_desconto(Produto *p, float desconto)
{
    if (desconto < 101 && desconto >= 0)
    {
        p->preco *= (1 - (desconto / 100));
    }
    else
    {
        printf("Desconto indisponivel\n");
    }
}

int main()
{
    Produto produto = {1, "Teclado", 20};
    Produto *ptr = &produto;

    // desconto de 10%
    printf("O preco original --> R$ %.2f\n", ptr->preco);
    aplicar_desconto(ptr, 10);
    printf("O valor com desconto --> R$ %.2f\n", ptr->preco);

    return 0;
}