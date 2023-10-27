#include <stdio.h>

int main() {
    float matriz1[2][2], matriz2[2][2], resultado[2][2];
    int opcao;

    
    printf("Digite os valores da primeira matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matriz1[i][j]);
        }
    }

    
    printf("Digite os valores da segunda matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matriz2[i][j]);
        }
    }

    
    printf("Escolha a operação:\n");
    printf("(a) Somar as duas matrizes\n");
    printf("(b) Subtrair a primeira matriz da segunda\n");
    printf("(c) Procurar itens iguais nas duas matrizes\n");
    printf("(d) Imprimir as matrizes\n");
    printf("Opção: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
                for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    resultado[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }
            break;
        case 'b':

            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    resultado[i][j] = matriz1[i][j] - matriz2[i][j];
                }
            }
            break;
        case 'c':
              printf("Itens iguais nas duas matrizes:\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    if (matriz1[i][j] == matriz2[i][j]) {
                        printf("%.2f ", matriz1[i][j]);
                    }
                }
            }
            printf("\n");
            return 0;
        case 'd':
          printf("Matriz 1:\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    printf("%.2f ", matriz1[i][j]);
                }
                printf("\n");
            }
            printf("Matriz 2:\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    printf("%.2f ", matriz2[i][j]);
                }
                printf("\n");
            }
            return 0;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

        printf("Resultado da operação:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
