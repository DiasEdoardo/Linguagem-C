#include <stdio.h>

int main() {
    int quantidade_maca;
    double custo_total;

    printf("Digite a quantidade de maçãs compradas: ");
    scanf("%d", &quantidade_maca);

    custo_total = (quantidade_maca < 12) ? (quantidade_maca * 1.30) : (quantidade_maca * 1.00);

    printf("Custo total da compra: R$ %.2lf\n", custo_total);

    return 0;
}
