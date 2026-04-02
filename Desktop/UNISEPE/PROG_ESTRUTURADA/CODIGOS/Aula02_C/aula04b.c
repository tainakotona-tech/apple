#include    <stdio.h>

int main() {
    // IMPRIME OS NUMEROS DE 0 A 9
    // 'FOR' É A ESTRUTURA DE REPETIÇÃO MAIS USADA EM C
    // A INICIALIZAO, A CONDIÇÃO E ATUALIZAÇÃO. A INICIALIZAÇÃO É EXECUTADA APENAS UMA VEZ,
    // NO INICIO DO LOOP. A CONDIÇÃO É AVALIADA ANTES DE CADA ITERAÇÃO, E O LOOP CONTINUA ENQUANTO A CONDIÇÃO FOR VERDADEIRA. A ATUALIZAÇÃO É EXECUTADA APÓS CADA ITERAÇÃO DO LOOP.
    int max;
    printf("Digite um valor maximo para o loop: ");
    scanf("%d", &max);

    for(int i = 0; i <= max; i++) {
        printf("Numero: %d \n", i);
    }
    return 0;

}