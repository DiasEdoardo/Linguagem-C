#include <stdio.h>

int fatorial_quadruplo(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return (2 * n * fatorial_quadruplo(n - 1)) / n;
    }
}

int main() {
    int n;
    printf("digite um numero:");
    scanf("%i",&n);

    int resultado = fatorial_quadruplo(n);

    printf("O fatorial quádruplo de %d é: %d\n", n, resultado);

    return 0;
}
