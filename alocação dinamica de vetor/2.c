#include<stdio.h>
#include<stdlib.h>

        int main(){
            int tam;
            printf("digite o tamanho do vetor que deseja alocar:");
            scanf("%d",&tam);
            int *array = (int *)malloc(tam * sizeof(int));
            printf("insira os %d valor(es):",tam);
            for (int i = 0; i < tam; i++)
            {
            scanf("%d",&array[i]);
            }
            for (int i = 0; i < tam; i++)
            {
            printf("%d",array[i]);
            }
            free(array);
        }