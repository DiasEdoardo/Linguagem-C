#include <stdio.h>
#include <math.h>

int main() {
    double numero, resultado;

    printf("Digite um número: ");
    scanf("%lf", &numero);

    resultado = (int)numero % 2 == 0 ? sqrt(numero) : numero / 2;

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
