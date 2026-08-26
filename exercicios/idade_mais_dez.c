#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade daqui a 10 anos sera: %d\n", idade + 10);

    return 0;
}
