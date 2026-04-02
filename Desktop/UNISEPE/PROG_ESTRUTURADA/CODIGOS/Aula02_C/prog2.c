#include <stdio.h>
int main() {
    int idade = 20;
    float altura = 1.75;
    char genero = 'M';
    printf("Idade: %d\n", idade); // % d para inteiros
    printf("Altura: %.2f\n", altura); // % f para números de ponto flutuante, .2 para mostrar apenas 2 casas decimais
    printf("Gênero: %c\n", genero); // % c para caracteres
    return 0;
}