#include <stdio.h>

void parouimpar(int valor) {
    if (valor % 2 == 0) {
        printf("O valor é par.\n");
    } else {
        printf("O valor é ímpar.\n");
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    parouimpar(numero);

    return 0;
}
