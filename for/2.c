#include <stdio.h>

int main() {
    int limite_superior;

    printf("Digite o limite superior: ");
    scanf("%d", &limite_superior);

    printf("Números ímpares menores que %d:\n", limite_superior);

    // Certifica-se de que o número seja ímpar
    if (limite_superior % 2 == 0)
        limite_superior--;

    // Imprime todos os números ímpares menores que o limite superior
    for (int i = limite_superior; i > 0; i -= 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
