#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_colunas[3] = {0}; 
    
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            soma_colunas[j] += matriz[i][j];
        }
    }
    
    
    printf("Array de soma das colunas:\n");
    for (int j = 0; j < 3; j++) {
        printf("%d ", soma_colunas[j]);
    }
    printf("\n");
    
    return 0;
}
