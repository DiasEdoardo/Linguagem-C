#include<stdio.h>
#include<stdlib.h>

        int main(){
            int tam,par=0,impar=0,i;
            printf("insira o tamanho do vetor:");
            scanf("%d,",&tam);
            int *array =(int *)malloc(tam * sizeof (int));
            printf("ïnsira os %d valor(es)",tam);
            for (i = 0; i < tam; i++)
            {
                scanf("%d",&array[i]);
            }
            for (i = 0; i < tam; i++)
            {
                if (array[i] % 2 == 0)
                {
                    printf("%d é par \n",array[i]);
                    par++;
                }else{
                    printf("%d é impar\n",array[i]);
                    impar++;
                }
            }
            printf("tem %d numeros pares e %d numeros impares",par,impar);
            free(array);
            
        }