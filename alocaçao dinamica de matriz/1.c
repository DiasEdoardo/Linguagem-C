#include <stdio.h>
#include <stdlib.h>

int searchValue(int **matrix, int rows, int cols, int value) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == value) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int rows, cols;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &rows);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &cols);

    // Alocação dinâmica da matriz
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    // Leitura da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int value;
    printf("Digite o valor a ser buscado na matriz: ");
    scanf("%d", &value);

    // Chamada da função de busca
    int result = searchValue(matrix, rows, cols, value);

    if (result) {
        printf("O valor está presente na matriz.\n");
    } else {
        printf("O valor não está presente na matriz.\n");
    }

    // Liberação da memória alocada
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}