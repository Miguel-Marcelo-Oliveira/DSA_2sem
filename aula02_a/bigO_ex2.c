#include <stdio.h>

int somaMatriz(int matriz[][3], int n)
{
    int soma = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main(void)
{
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int resultado = somaMatriz(matriz, 3);

    printf("Soma = %d\n", resultado);

    return 0;
}