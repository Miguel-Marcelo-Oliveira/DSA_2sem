#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int dado;             // a informação
    struct Node *proximo; // o link
};

void inserirInicio(struct Node **head, int valor)
{
    struct Node *novo = malloc(sizeof(struct Node));
    novo->dado = valor;
    novo->proximo = *head;
    *head = novo;
}

void imprimirLista(struct Node *head)
{
    struct Node *atual = head;
    while (atual != NULL)
    {
        printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }
}

struct Node *buscar(struct Node *head, int alvo) {
    struct Node *atual = head;
    while (atual != NULL) {
        if (atual->dado == alvo) return atual;
        atual = atual->proximo;
    }
}

int main(void)
{
    struct Node *No;

    No = (struct Node *)malloc(sizeof(struct Node));
    // printf("%d\n", No->dado);
    No->dado = 10;
    No->proximo = NULL;
    // printf("%d\n", No->dado);
    if (No == NULL) {
        printf("Erro: Memoria insuficiente");
        exit(1);
    }

    inserirInicio(&No, 20);
    inserirInicio(&No, 30);
    inserirInicio(&No, 67);
    inserirInicio(&No, 24);

    /*
    printf("%d -> ", No -> dado);
    printf("%d -> ", No->proximo->dado);
    printf("%d -> ", No -> proximo -> proximo -> dado);
    printf("NULL\n");
    */

    // imprimirLista(No);

    struct Node *novoNo;
    int alvo = 67;
    novoNo = buscar(No, alvo);
    if (No == NULL) {
        printf("Erro: Memoria insuficiente");
        exit(1);
    }
    printf("O valor buscado -> %d \nValor encontrado -> %d", alvo, novoNo->dado);

    return 0;
}
