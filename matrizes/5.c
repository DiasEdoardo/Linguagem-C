#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5], soma=0, x,valor;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite um valor:\n");
            scanf("%i",&mat[i][j]);
        }
        
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                soma += mat[i][j];
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
    printf("A soma da diagonal principal é: %i",soma);
    
    return 0;
}   