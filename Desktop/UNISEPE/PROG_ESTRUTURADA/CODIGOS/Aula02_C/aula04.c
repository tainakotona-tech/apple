#include <stdio.h>

int main(){
    char nome[50];
    int idade;
    printf("Digite seu nome: ");
    scanf("%s", nome); // %s para strings

    printf("Digite sua idade: ");
    scanf("%d", &idade); // %d para inteiros, & para passar o endereço da variável
    
    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    
    // condicionais
    if(idade < 12){
        printf("Você é uma criança.\n");
    } else if(idade < 18){
        printf("Você é um adolescente.\n");
    } else {
        printf("Você é um adulto.\n");
    }
}