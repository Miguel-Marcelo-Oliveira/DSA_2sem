#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// Semelhante a "import matplotlib.pyplot as plt"

// Apenas números positivos
typedef unsigned int uint;
typedef unsigned long ulong;

typedef struct
{
    char rua[50];
    uint numero;
    char bairro[50];
    char cidade[50];
} Endereco;

typedef struct
{
    uint rm;
    char nome[50];
    float nota[3];
    bool aprovacao;
    Endereco endereco;
} Aluno;

int main()
{
    Aluno aluno[40]; // até 40 alunos

    aluno[0].rm = 123456;
    strcpy(aluno[0].nome, "João Pedro\n");

    printf("%d\n", aluno[0].rm);
    printf("%s", aluno[0].nome);

    strcpy(aluno[0].endereco.rua, "Rua São Joaquim");
    aluno[0].endereco.numero = 123;
    strcpy(aluno[0].endereco.bairro, "Paulista");
    strcpy(aluno[0].endereco.cidade, "São Paulo");

    printf("%s, %d - %s - %s\n", aluno[0].endereco.rua, aluno[0].endereco.numero, aluno[0].endereco.bairro, aluno[0].endereco.cidade);

    /*
    média das notas >= 6 e aprovação = True --> Aprovado!
    média das notas <= 4 e e média das notas < 6 e aprovação = True --> Exame!
    média das notas < 4 e aprovação = False --> Reprovado!
    tamanho dinâmico do vetor --> sizeof
    */
    // 3 notas
    // aluno[0].nota[] = {10, 8, 9};
    aluno[0].nota[0] = 10;
    aluno[0].nota[1] = 8;
    aluno[0].nota[2] = 9;
    int tamanho = sizeof(aluno[0].nota) / sizeof(aluno[0].nota[0]);
    float media = (aluno[0].nota[0] + aluno[0].nota[1] + aluno[0].nota[2]) / tamanho;

    // printf("\n%d", tamanho);
    // printf("\n%.2f", media);

    aluno[0].aprovacao = true; // ou 1 e false ou 0

    if (media >= 6)
    {
        printf("Aluno Aprovado\n");
    }
    else if (media >= 4 && media < 6)
    {
        // Fazer o cálculo para a aprovação
        printf("Aluno(a) em Exame\n");
    }
    else
    {
        aluno[0].aprovacao == false;
    }

    if (aluno[0].aprovacao == true)
    {
        printf("Aluno Aprovado!\n");
    }
    else if (aluno[0].aprovacao == false)
    {
        printf("Aluno Reprovado\n");
    }
    else
    {
        printf("Condição não reconhecida!");
    }

    return 0;
}
