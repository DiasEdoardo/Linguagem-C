#include<stdio.h>
#include<stdlib.h>

int main()
{
    int mat1[2][2], mat2[2][2], x,y,z, mat3[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite os valores:\n");
            scanf("%i",&mat1[i][j]);

        }
        
    }
    printf("A matriz 1 é:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
            {
                printf("%i", mat1[i] [j]);
            }
            printf("\n");
        }
    printf("\n");

    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("Digite os valores:\n");
            scanf("%i",&mat2[k][l]);
        }
        
    }
    printf("A matriz 2 é:\n");
    for (int k = 0; k < 2; k++){
        for (int l = 0; l < 2; l++)
            {
                printf("%i", mat2[k] [l]);
            }
            printf("\n");
        }
    printf("\n");
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            int k=0,l=0,i=0,j=0;
            mat3[x][y]=mat1[i][j]+mat2[k][l];
            i++;
            j++;
            k++;
            l++;
            
        }
        
    }
     printf("A soma matrizes é:\n");
    for (int x = 0; x < 2; x++){
        for (int y = 0; y < 2; y++)
            {
                printf("%i", mat3[x] [y]);
            }
            printf("\n");
        }
    printf("\n");
    

    
    
    return 0;
}