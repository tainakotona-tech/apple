#include <stdio.h>
#include <stdlib.h>

#define TAM 5

struct Produto{
    char nome[50];
    float preco;
    int quantidade;
};

//TAD --> dados + funcoes q manipulam os dados
void cadastrarProduto(struct Produto p[], int *qtd){
    if(*qtd < TAM){
        getchar(); // Limpa o buffer do teclado
        printf("Digite o nome do produto: ");
        fgets(p[*qtd].nome, 50, stdin);

        printf("Digite o preco do produto: ");
        scanf("%f", &p[*qtd].preco);
        

        printf("Digite a quantidade do produto: ");
        scanf("%d", &p[*qtd].quantidade);

        (*qtd)++; 
    }else{  
        printf("Limite de produtos atingido!\n");
    }
}

void listarProdutos(struct Produto p[], int qtd){
    if(qtd > 0){
        for(int i = 0; i < qtd; i++){
            printf("Produto %d:\n", i + 1);
            printf("Nome: %s", p[i].nome);
            printf("Preco: %.2f\n", p[i].preco);
            printf("Quantidade: %d\n", p[i].quantidade);
            printf("-------------------------\n");
        }
    }else{
        printf("Nenhum produto cadastrado!\n");
    }
}

void atualizarProduto(struct Produto p[], int qtd){
    if(qtd > 0){
        int indice;
        printf("Digite o numero do produto que deseja atualizar (1 a %d): ", qtd);
        scanf("%d", &indice);

        if(indice >= 1 && indice <= qtd){
            indice--; // Ajusta para o índice do array
            getchar(); // Limpa o buffer do teclado

            printf("Digite o novo nome do produto: ");
            fgets(p[indice].nome, 50, stdin);

            printf("Digite o novo preco do produto: ");
            scanf("%f", &p[indice].preco);

            printf("Digite a nova quantidade do produto: ");
            scanf("%d", &p[indice].quantidade);

            printf("Produto atualizado com sucesso!\n");
        }else{
            printf("Produto invalido!\n");
        }
    }else{
        printf("Nenhum produto cadastrado para atualizar!\n");
    }
}   

void excluirProduto(struct Produto p[], int *qtd){
    if(*qtd > 0){
        int indice;
        printf("Digite o numero do produto que deseja excluir (1 a %d): ", *qtd);
        scanf("%d", &indice);

        if(indice >= 1 && indice <= *qtd){
            indice--; // Ajusta para o índice do array

            // Move os produtos seguintes para preencher o espaço do produto excluído
            for(int i = indice; i < *qtd - 1; i++){
                p[i] = p[i + 1];
            }
            (*qtd)--; // Decrementa a quantidade de produtos
            printf("Produto excluido com sucesso!\n");
        }else{
            printf("Produto invalido!\n");
        }
    }else{
        printf("Nenhum produto cadastrado para excluir!\n");
    }
}   

int main(){
    struct Produto produtos[TAM];
    int quantidadeProdutos = 0;
    int opcao;

    do{
        printf("Menu:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Listar Produtos\n");
        printf("3. Atualizar Produto\n");
        printf("4. Excluir Produto\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                cadastrarProduto(produtos, &quantidadeProdutos);
                break;
            case 2:
                listarProdutos(produtos, quantidadeProdutos);
                break;
            case 3:
                atualizarProduto(produtos, quantidadeProdutos);
                break;
            case 4:
                excluirProduto(produtos, &quantidadeProdutos);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }while(opcao != 5);

    return 0;
}   