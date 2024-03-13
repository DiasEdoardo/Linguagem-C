#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    int codigo;
    char nome[MAX_NAME_LENGTH];
    int quantidade;
    float preco;
} Produto;

int main() {
    int N;
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &N);

    Produto *produtos = (Produto *) malloc(N * sizeof(Produto));

    // Entrada das informações dos produtos
    for (int i = 0; i < N; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome: ");
        scanf(" %[^\n]s", produtos[i].nome);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
    }

    // Encontrar o produto com o maior preço de venda
    int indiceMaiorPreco = 0;
    for (int i = 1; i < N; i++) {
        if (produtos[i].preco > produtos[indiceMaiorPreco].preco) {
            indiceMaiorPreco = i;
        }
    }

    // Encontrar o produto com a maior quantidade disponível no estoque
    int indiceMaiorQuantidade = 0;
    for (int i = 1; i < N; i++) {
        if (produtos[i].quantidade > produtos[indiceMaiorQuantidade].quantidade) {
            indiceMaiorQuantidade = i;
        }
    }

    printf("\nProduto com o maior preço de venda:\n");
    printf("Código: %d\n", produtos[indiceMaiorPreco].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorPreco].nome);
    printf("Quantidade: %d\n", produtos[indiceMaiorPreco].quantidade);
    printf("Preço: %.2f\n", produtos[indiceMaiorPreco].preco);

    printf("\nProduto com a maior quantidade disponível no estoque:\n");
    printf("Código: %d\n", produtos[indiceMaiorQuantidade].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorQuantidade].nome);
    printf("Quantidade: %d\n", produtos[indiceMaiorQuantidade].quantidade);
    printf("Preço: %.2f\n", produtos[indiceMaiorQuantidade].preco);

    free(produtos);

    return 0;
}