#include <stdio.h>

void calcular_soma_e_atualizar(int *a, int b) {
    *a = *a + b;
}

int main() {

    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    calcular_soma_e_atualizar(&a, b);
    printf("Valores atualizados - A: %d, B: %d\n", a, b);
    return 0;
}
