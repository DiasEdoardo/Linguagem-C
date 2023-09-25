#include <stdio.h>

int main() {
    double valor_compra, lucro, valor_venda;

    printf("Digite o valor da compra: R$ ");
    scanf("%lf", &valor_compra);

    lucro = (valor_compra < 20.0) ? (0.45 * valor_compra) : (0.3 * valor_compra);
    valor_venda = valor_compra + lucro;

    printf("Valor da venda: R$ %.2lf\n", valor_venda);

    return 0;
}
