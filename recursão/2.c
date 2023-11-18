#include <stdio.h>

int padovan(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return 1;
    } else {
        return padovan(n - 2) + padovan(n - 3);
    }
}

int main() {
    int n ;
    printf("digite um numero:");
    scanf("%i",&n);

    int resultado = padovan(n);

    printf("O %d-ésimo termo da sequência de Padovan é: %d\n", n, resultado);

    return 0;
}
