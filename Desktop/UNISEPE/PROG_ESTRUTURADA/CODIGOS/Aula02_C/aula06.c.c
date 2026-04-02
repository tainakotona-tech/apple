#include <stdio.h>

#define TAM 3

struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

int main() {
    struct Aluno alunos [TAM];
    
    for (int i = 0; i < TAM; i++){
        printf("\n Aluno %d\n", i + 1);
        getchar(); // Limpa o buffer de entrada
        printf("Digite o nome do aluno: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        printf("Digite a primeira nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].nota2);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    }
    printf("\n ===== Resultados ======\n");
    for (int i = 0; i < TAM; i++){
        printf("\n Aluno: %s", alunos[i].nome);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Média: %.2f\n", alunos[i].media);

        if (alunos[i].media >= 6.0) {
            printf("Situacao: Aprovado\n");
        } else {
            printf("Situacao: Reprovado\n");
        }
    }
    return 0;
}