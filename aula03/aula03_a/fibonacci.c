#include <stdio.h>

int fibonacci(int n) {
    // Caso Base
    if(n <= 1) return n;
    
    // Caso Recursivo
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Sequencia de Fibonaccido valor %d --> %d\n", n, fibonacci(n));

    return 0;
}