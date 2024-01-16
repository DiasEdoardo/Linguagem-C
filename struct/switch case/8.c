#include <stdio.h>
#include <string.h>

int main() {
    char numero_conta[20];
    char pessoa[100];
    float saldo;

    printf("Informe o número da conta: ");
    scanf("%s", numero_conta);

    printf("Informe o nome da pessoa: ");
    scanf(" %[^\n]", pessoa);

    printf("Informe o saldo inicial: ");
    scanf("%f", &saldo);

    char operacao;
    float valor;

    while (1) {
        printf("\nEscolha a operacao \nD - Depósito\nR - Retirada\nS - Saldo\nQ - Sair\n");
        scanf(" %c", &operacao);

        switch (operacao) {
            case 'D':
            case 'd':
                printf("Digite o valor do depósito: ");
                scanf("%f", &valor);
                saldo += valor;
                printf("Depósito de R$%.2f realizado com sucesso. Novo saldo: R$%.2f.\n", valor, saldo);
                break;

            case 'R':
            case 'r':
                printf("Digite o valor da retirada: ");
                scanf("%f", &valor);
                if (valor > saldo) {
                    printf("Saldo insuficiente para realizar a retirada.\n");
                } else {
                    saldo -= valor;
                    printf("Retirada de R$%.2f realizada com sucesso. Novo saldo: R$%.2f.\n", valor, saldo);
                }
                break;

            case 'S':
            case 's':
                printf("Saldo atual: R$%.2f.\n", saldo);
                break;

            case 'Q':
            case 'q':
                printf("Saindo do programa.\n");
                return 0;

            default:
                printf("Operação inválida. Tente novamente.\n");
        }
    }

    return 0;
}
