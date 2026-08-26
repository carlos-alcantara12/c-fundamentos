#include <stdio.h>

int main(void) {
    int opcao;
    int a;
    int b;

    printf("--- MENU ---\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Digite outro valor: ");
    scanf("%d", &b);

    switch (opcao) {
        case 1:
            if (b > a) {
                printf("Resultado: %d\n", a + b);
            } else {
                printf("Para realizar a soma, B precisa ser maior que A.\n");
            }
            break;

        case 2:
            printf("Resultado: %d\n", a - b);
            break;

        case 3:
            printf("Resultado: %d\n", a * b);
            break;

        case 4:
            if (a % 2 == 0 && b % 2 != 0) {
                if (b != 0) {
                    printf("Resultado: %.2f\n", (float)a / b);
                } else {
                    printf("Nao e possivel dividir por zero.\n");
                }
            } else {
                printf("Para dividir, A deve ser par e B deve ser impar.\n");
            }
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
