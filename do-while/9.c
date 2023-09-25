#include <stdio.h>

int main() {
    float rendaMensal, imposto;
    char opcao;

    do {
        printf("Digite a renda mensal: R$");
        scanf("%f", &rendaMensal);

        if (rendaMensal <= 1637.11) {
            imposto = 0;
        } else if (rendaMensal <= 2453.50) {
            imposto = rendaMensal * 0.075;
        } else if (rendaMensal <= 3271.38) {
            imposto = rendaMensal * 0.15;
        } else if (rendaMensal <= 4087.65) {
            imposto = rendaMensal * 0.225;
        } else {
            imposto = rendaMensal * 0.275;
        }

        printf("Imposto a pagar: R$%.2f\n", imposto);

        printf("Deseja fazer outra consulta? (S para Sim, qualquer outra tecla para sair): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    return 0;
}
