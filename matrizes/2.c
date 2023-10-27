#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3] [2], soma = 0;
    float x = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite os valores:\n");
            scanf("%i", &mat[i] [j]);
            soma = soma + mat[i] [j];
        }
    }
    x = soma * 11.0 ;
    printf(" %i x 11 = %.1f\n",soma , x);
    printf("A matriz é:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++)
            {
                printf("%i", mat[i] [j]);
            }
            printf("\n");
        }

        return 0;
}