#include <stdio.h>

int main() {
    int mat[4][4];
    int maior =0;
    int linhamaior = 0;
    int colunamaior = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor: ");
            scanf("%i", &mat[i][j]);
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                linhamaior = i;
                colunamaior = j;
            }
        }
    }
    printf("A matriz é:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor é: %i\n", maior);
    printf("Localização (linha, coluna): (%i, %i)\n", linhamaior, colunamaior);

    return 0;
}