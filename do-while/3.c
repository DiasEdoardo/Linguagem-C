#include <stdio.h>

int main() {
    int contador = 0; 
    double numero, soma = 0.0;

    printf("Digite 10 números:\n");

    while (contador < 10) {
        scanf("%lf", &numero);
        soma += numero;
        contador++;
    }

    double media = soma / 10.0;

    printf("A soma dos números é: %.2lf\n", soma);
    printf("A média dos números é: %.2lf\n", media);

    return 0;
}
