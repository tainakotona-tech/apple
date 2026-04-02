#include <stdio.h>  

int main(){
    // DECLARAÇÃO DE UM VETOR DE INTEIROS COM 5 ELEMENTOS POR ARRAYS
    int vetor[5] = {1, 2, 3, 4, 5}; // INICIALIZAÇÃO DO VETOR COM VALORES
    // ACESSO AOS ELEMENTOS DO VETOR

    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: %d\n", i, vetor[i]);
    }
    return 0;
}