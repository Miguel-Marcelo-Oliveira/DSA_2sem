#include <stdio.h>

typedef struct
{
    int rm;
    char nome[50];
    float nota;
} Aluno;

void atualiza_nota(Aluno *a)
{
    a->nota = 10;
}

int main()
{
    Aluno aluno[2] = {{123, "Ana", 9.0}, {245, "Joao", 10}};
    Aluno *ptr = aluno;
    ptr++; // acesso ao próximo alno ou estrutura

    atualiza_nota(ptr);

    // ptr++;
    // ptr++;

    printf("%f", ptr->nota);

    return 0;
}