#include <stdio.h>

struct Aluno
{
    char nome[50];
    int idade;
    float nota1;
    float nota2;
    float media;
};
 
int main(){
    struct Aluno aluno02;
    
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno02.nome);
    
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno02.idade);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &aluno02.nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &aluno02.nota2);

    aluno02.media = (aluno02.nota1 + aluno02.nota2) / 2;
    
    printf("\nInformações do Aluno:\n");
    printf("Nome: %s\n", aluno02.nome); 
    printf("Idade: %d\n", aluno02.idade);
    printf("Nota 1: %.2f\n", aluno02.nota1);
    printf("Nota 2: %.2f\n", aluno02.nota2);
    printf("Média: %.2f\n", aluno02.media);

    if (aluno02.media >= 6.0)
    {
        printf("Aluno aprovado!\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    

    return 0;
}