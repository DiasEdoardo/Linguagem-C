#include <stdio.h>

int find(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    int maior = find(numero1, numero2);

    printf("O maior número é: %d\n", maior);

    return 0;
}
