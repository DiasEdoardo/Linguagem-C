#include <stdio.h>
#include <string.h>

void fibonacci_palavra(int n, char result[]) {
    if (n == 0) {
        result[0] = 'b';
        result[1] = '\0';
    } else if (n == 1) {
        result[0] = 'a';
        result[1] = '\0';
    } else {
        char fib_n_1[256];
        char fib_n_2[256];

        fibonacci_palavra(n - 1, fib_n_1);
        fibonacci_palavra(n - 2, fib_n_2);

        strcpy(result, fib_n_1);
        strcat(result, fib_n_2);
    }
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    char resultado[256];

    fibonacci_palavra(n, resultado);

    printf("A %d-ésima palavra de Fibonacci é: %s\n", n, resultado);

    return 0;
}
