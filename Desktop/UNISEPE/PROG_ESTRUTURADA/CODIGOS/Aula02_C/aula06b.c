// TAD - Tipo Abstrato de Dados
#include <stdio.h>
#include <string.h>

float media(float a, float b){
    return (a + b) / 2;
}
int main(){
    float n1,n2;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("A media e: %.2f\n", media(n1, n2));
    return 0;
}