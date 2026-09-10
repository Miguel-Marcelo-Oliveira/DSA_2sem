#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 1000
#define pi 3.1416

// Somatório Recursivo
int somaVetor(int vetor[], int n)
{

    if (n == 0)
    {
        return 0;
    }

    return vetor[n - 1] + somaVetor(vetor, n - 1);
}

int main(void)
{
    clock_t inicio_for, fim_for, inicio_recursivo, fim_recursivo;
    double tempo_cpu;

    int vetor[TAMANHO];

    // 1. Inicializa o gerador de números aleatórios usando a hora atual
    srand(time(NULL));

    // 2. Preenche o vetor com números aleatórios
    for (int i = 0; i < TAMANHO; i++)
    {
        // Gera números entre 0 e 99. Mude o valor se precisar de outro intervalo.
        vetor[i] = rand() % 100;
    }

    int n = sizeof(vetor) / sizeof(vetor[0]);

    // Loop For
    inicio_for = clock();
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += vetor[i];
    }
    printf("Soma = %d\n", soma);
    fim_for = clock();
    tempo_cpu = ((double)(fim_for - inicio_for)) / CLOCKS_PER_SEC;
    printf("O codigo levou %f segundos para ser executado.\n", tempo_cpu);

    // Somatória por Recursão
    inicio_recursivo = clock();
    printf("Soma = %d\n", somaVetor(vetor, n));
    fim_recursivo = clock();
    tempo_cpu = ((double)(fim_recursivo - inicio_recursivo)) / CLOCKS_PER_SEC;
    printf("O codigo levou %f segundos para ser executado.\n", tempo_cpu);

    return 0;
}