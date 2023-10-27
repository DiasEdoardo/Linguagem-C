#include <stdio.h>

int main() {
    float matriz[3][6];
    
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
   
    float soma_colunas_impares = 0;
    for (int j = 0; j < 6; j += 2) {
        for (int i = 0; i < 3; i++) {
            soma_colunas_impares += matriz[i][j];
        }
    }
    printf("Soma dos elementos das colunas ímpares: %.2f\n", soma_colunas_impares);
    
   
    float soma_segunda_coluna = 0;
    float soma_quarta_coluna = 0;
    for (int i = 0; i < 3; i++) {
        soma_segunda_coluna += matriz[i][1];
        soma_quarta_coluna += matriz[i][3];
    }
    float media_segunda_quarta = (soma_segunda_coluna + soma_quarta_coluna) / 3;
    printf("Média aritmética da segunda e quarta colunas: %.2f\n", media_segunda_quarta);
    
   
    for (int i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }
    
   
    printf("Matriz modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
