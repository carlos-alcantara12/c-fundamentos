#include <stdio.h>

int main(void) {
    float media;

    printf("Digite a media do aluno: ");
    scanf("%f", &media);

    if (media < 5.0) {
        printf("REPROVADO\n");
    } else if (media < 7.0) {
        printf("RECUPERACAO\n");
    } else {
        printf("APROVADO\n");
    }

    return 0;
}
