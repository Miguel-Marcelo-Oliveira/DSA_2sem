#include <stdio.h>
#include <stdlib.h>
#include <string.h> // comparar string

typedef struct No No;

struct No
{
    char equipamento[20];
    int valor_consumo;
    No *proximo;
};

No *buscar(No *inicio, char nome[20])
{

    No *atual = inicio;

    while (atual != NULL)
    {

        if (atual->equipamento == nome)
        {

            /*
                Retorna o endereço
                do nó encontrado.
            */
            return atual;
        }

        atual = atual->proximo;
    }

    /*
        Não encontrou.
    */
    return NULL;
}

int main(void) {
    No *inicio = NULL;
    int opcao;
    int valor;
    char nome_equipamento[20];

        printf("Nome para buscar: ");
        scanf("%s", &nome_equipamento);

        No *resultado =
            buscar(
                inicio,
                nome_equipamento);

        if (resultado != NULL)
        {

            printf(
                "Valor %d encontrado.\n",
                resultado->equipamento);
        }
        else
        {

            printf(
                "Equipamento nao encontrado.\n");
        }


}