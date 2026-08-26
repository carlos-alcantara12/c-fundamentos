#include <stdio.h>

int main(void) {
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0f;

    printf("Media: %.2f\n", media);

    if (media < 5.0f) {
        printf("REPROVADO\n");
    } else if (media < 7.0f) {
        printf("RECUPERACAO\n");
    } else {
        printf("APROVADO\n");
    }

    return 0;
}
