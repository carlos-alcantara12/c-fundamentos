#include <stdio.h>

int main(void) {
    char inicial;
    int idade;

    printf("Digite a primeira letra do seu nome: ");
    scanf(" %c", &inicial);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Inicial: %c, idade: %d\n", inicial, idade);

    return 0;
}
