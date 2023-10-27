#include <stdio.h>

void verpositvo(int valor) {
    if (valor > 0) {
        printf("O valor é positivo.\n");
    } else if (valor < 0) {
        printf("O valor é negativo.\n");
    } else {
        printf("O valor é zero.\n");
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    verpositivo(numero);

    return 0;
}
