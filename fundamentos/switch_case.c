#include <stdio.h>

int main(void) {
    int opcao;

    printf("MENU\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Opcao de soma selecionada.\n");
            break;
        case 2:
            printf("Opcao de subtracao selecionada.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
