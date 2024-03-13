#include<stdio.h>
#include<stdlib.h>

    int main(){
        int n,i=0;
        printf("digite o tamanho do vetor:\n");
        scanf("%d",&n);
        int *array =(int *)malloc(n * sizeof (int));
        printf("insira os elementos do vetor:\n");
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&array[i]);
            if (array[i] < 0)
            {
                break;
            }
            
        }
        int *array2 =(int *)realloc(array,i * sizeof(int));

        printf("o vetor lido é \n");
        for (int j = 0; j < i; j++)
        {
            printf("%d ",array2[j]);
        }
        free(array2);
        free(array);
        
    }