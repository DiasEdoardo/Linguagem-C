#include <stdio.h>

int main() {
    double numero, resultado;

    printf("Digite um número: ");
    scanf("%lf", &numero);

    resultado = (numero > 0) ? (numero * 3) : (numero * numero);

    printf("O %s do número %.2lf é %.2lf\n", 
           (numero > 0) ? "triplo" : "número elevado ao quadrado",
           numero, resultado);

    return 0;
}
