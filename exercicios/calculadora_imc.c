#include <stdio.h>

int main(void) {
    float peso;
    float altura;
    float imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    return 0;
}
