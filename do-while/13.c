#include <stdio.h>

int main() {
    int n, i, num;

    printf("Digite um numero inteiro para iniciar a sequencia de naturais impares: ");
    scanf("%d", &num);

    printf("Digite o numero de naturais impares que deseja imprimir: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero inteiro positivo para imprimir.\n");
        return 1;
    }

    printf("Os %d primeiros numeros naturais impares a partir de %d sao:\n", n, num);

    i = 0;
    do {
        if (num % 2 != 0) {
            printf("%d ", num);
            i++;
        }
        num++;  // Incrementa para obter o próximo número
    } while (i < n);

    return 0;
}
