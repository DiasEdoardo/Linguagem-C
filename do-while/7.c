#include <stdio.h>

int main() {
    int soma = 0;
    int numero = 1; 
    do {
    
        if (numero % 2 != 0 && numero % 3 == 0) {
            soma += numero;
        }
        numero++;
    } while (numero <= 500);
    printf("A soma dos números ímpares múltiplos de 3 de 1 a 500 é: %d\n", soma);
    return 0;
}
