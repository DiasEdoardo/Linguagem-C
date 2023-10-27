#include <stdio.h>
#include <math.h>

double calcpotencia(double x, int n) {
    return pow(x, n);
}

int main() {
    double base;
    int expoente;

    printf("Digite a base (x): ");
    scanf("%lf", &base);

    printf("Digite o expoente (n): ");
    scanf("%d", &expoente);

    double resultado = calcpotencia(base, expoente);

    printf("%.2lf elevado a %d é igual a %.2lf\n", base, expoente, resultado);

    return 0;
}
