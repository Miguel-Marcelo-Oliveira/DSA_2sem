#include <stdio.h>

void mostrarDobros(int n) {
    for (int i = 1; i < n; i *= 2) {
        printf("%d\n", i);  // O(1)
    }
}

// O valor de i dobra a cada loop, até que a condição se torne falsa
// toda vez que n é dobrado, o algoritmo precisa de apenas mais um passo

// 2**k = n
// k = log2(n)
// 2 elevado a k é igual a n
// sendo k o número de vezes que o loop é executado

int main(void){
    mostrarDobros(32);
    return 0; // O(1)
}


// Big O final ==> O(log n)
// g(n) final ==> g(n) = log2(n)