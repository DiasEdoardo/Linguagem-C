#include <stdio.h>
#include <stdlib.h>

// Função para alocar dinamicamente a matriz
int** alocarMatriz(int linhas, int colunas) {
    int** matriz = (int**)malloc(linhas * sizeof(int*));

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    return matriz;
}

// Função para liberar a memória alocada para a matriz
void liberarMatriz(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

// Função para verificar se um valor está presente na matriz
int valorEstaNaMatriz(int** matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1; // Valor encontrado
            }
        }
    }
    return 0; // Valor não encontrado
}

int main() {
    int linhas, colunas;

    // Obtém as dimensões da matriz do usuário
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Aloca dinamicamente a matriz
    int** matriz = alocarMatriz(linhas, colunas);

    // Preenche a matriz com valores informados pelo usuário
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Obtém um valor para verificar se está na matriz
    int valor;
    printf("Digite um valor para verificar se está na matriz: ");
    scanf("%d", &valor);

    // Verifica se o valor está na matriz
    if (valorEstaNaMatriz(matriz, linhas, colunas, valor)) {
        printf("O valor %d está na matriz.\n", valor);
    } else {
        printf("O valor %d não está na matriz.\n", valor);
    }

    // Libera a memória alocada para a matriz
    liberarMatriz(matriz, linhas);

    return 0;
}
