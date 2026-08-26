#include <stdio.h>
#include <string.h>

int main(void) {
    int idade = 10;
    double altura = 1.70;
    double salario = 1000.00;
    char sexo = 'M';
    char nome[50];

    strcpy(nome, "Carlos Eduardo");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2f\n", salario);
    printf("ALTURA = %.2f\n", altura);
    printf("GENERO = %c\n", sexo);
    printf("NOME = %s\n", nome);

    return 0;
}
