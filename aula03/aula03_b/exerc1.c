#include <stdio.h>

void contagem(int n){
    // Caso Base
    if (n == 0)
    {
        printf("FIM\n");
        return;
    }
    // Caso recursivo
    // printf("%d\n", n);
    contagem(n - 1);
    // printf("%d\n", n); // retorno da pilha a memória
}


long long potencia(int base, int exp){
    // Caso base
    if (exp == 0)
        return 1;

    return base * potencia(base, exp - 1);
    // Caso Recursivo
}


int somaVetor(int v[], int n){
    if (n == 0)
        return 0;

    return v[n - 1] + somaVetor(v, n - 1);
}


int maiorElemento(int v[], int n){
    // Caso Base
    if (n == 1)
        return v[0];

    // Caso Recursivo
    int anterior = maiorElemento(v, n - 1);
    if (v[n - 1] > anterior)
        return v[n - 1];
    return anterior;
}


int desafioA(int v[], int n) {
    if (n == 0)
        return 0;

    if (v[n - 1] % 2 == 0) return v[n - 1] + desafioA(v, n - 1);

    return desafioA(v, n - 1);
}


int main(void)
{
    // contagem(5);

    // printf("O resultado da potencia --> %lld.\n", potencia(2, 5));

    // int v[] = {10, 20, 30, 40, 50};
    // printf("%d\n", somaVetor(v, 5));

    // int v[] = {10, 20, 30, 70, 40, 80, 50, 60};

    int v[] = {10, 20, 30, 33, 45, 40, 50};
    int n = sizeof(v) / sizeof(v[0]);
    // printf("O maior do vetor --> %d\n", maiorElemento(v, n));
    printf("A soma dos valores pares --> %d.\n", desafioA(v, n));

    return 0;
}