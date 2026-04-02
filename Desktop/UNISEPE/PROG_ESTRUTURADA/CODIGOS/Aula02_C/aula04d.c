#include <stdio.h>

int main(){
    float notas[3];
    float media = 0.0;
    float soma = 0.0;

    // RECEBER NOTAS

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // ACUMULA A SOMA DAS NOTAS
    }

    // CALCULAR A MÉDIA
    media = soma / 3; // CALCULA A MÉDIA DIVIDINDO A SOMA PELO NÚMERO DE NOTAS

    // EXIBIR A MÉDIA
    printf("A média das notas é: %.2f\n", media); // EXIBE A MÉDIA COM 2 CASAS DECIMAIS
}