// struct

#include <stdio.h>
//exibir acentuação no terminal
#include <locale.h>

//vamos criar um registro com:
//nome, idade e média do aluno

struct Aluno
{
    char nome[50];
    int idade;
    float media;
};

int main()
{
    struct Aluno aluno1;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno1.nome); // Lê o nome do aluno

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade); // Lê a idade do aluno

    printf("Digite a média do aluno: ");
    scanf("%f", &aluno1.media); // Lê a média do aluno

    // Exibe as informações do aluno
    printf("\nInformações do Aluno:\n");
    printf("Nome: %s", aluno1.nome); // O nome já inclui a nova linha
    printf("Idade: %d\n", aluno1.idade);
    printf("Média: %.2f\n", aluno1.media);

    return 0;
}
