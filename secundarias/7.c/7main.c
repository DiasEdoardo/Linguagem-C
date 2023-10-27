#include <stdio.h>
#include "desconto.h"
#include "juros.h"
#include "duas.h"

int main() {
    float  desconto_aplicado,total,duasx,jurox;
    int opcao;

    printf("Quanto o cliente gastou na loja?");
    scanf("%f", &total);

    if (total < 100.00) {
        printf("Você pode selecionar uma de três opções:\n1) À vista com 10%% de desconto\n2) Em duas vezes (preço da etiqueta)\nDe 3 até 10 vezes com 3%% de juros ao mês");
        scanf("%i", &opcao);
        if (opcao == 1) {
            desconto_aplicado = desconto(total);
            printf("O valor final fica: %.2f\n", desconto_aplicado);
        }
        if (opcao == 2)
        {
            duasx=duas(total);
            printf("O valor divido em duas vezes fica %i",duasx);
        }
        if (opcao ==3)
        {
            jurox=juros(total);
            printf("O valor final de cada parcela fica: %i",jurox);
        }else{
            printf("opcao invalida");
        }
        
    } else {
        printf("Você pode selecionar uma de duas opções:\n1) À vista com 10%% de desconto\n2) Em duas vezes (preço da etiqueta)");
        scanf("%i", &opcao);
        if (opcao == 1) {
            desconto_aplicado = desconto(total);
            printf("O valor final fica: %.2f\n", desconto_aplicado);
        }
        if (opcao == 2)
        {
            duasx=duas(total);
            printf("O valor divido em duas vezes fica %i",duasx);
        }
        else{
            printf("opcao invalida");
        }
    }

    return 0;
}
