#include<stdio.h>
#include<stdlib.h>

    int main(){
        int vetor[6],bilhete[6],acertos=0;
        printf("digite 6 numeros gerados pela bilheteria:\n");
        for (int i = 0; i < 6; i++)
        {
            printf("bilhete %d ",i+1);
            scanf("%d",&vetor[i]);
        }
        printf("digite os 6 numeros do seu bilhete:\n");
        for (int i = 0; i < 6; i++)
        {
            printf("numero %d \n",i+1);
            scanf("%d",&bilhete[i]);
        }
        int* arr = (int *)malloc (acertos * sizeof(int));
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (vetor[i] == bilhete[j])
                {
                    acertos++;
                    arr[acertos] = bilhete[j];
                }
                
            }
            
        }
        printf("os numero sorteados foram:\n");
        for (int i = 0; i < 6; i++)
        {
            printf("%d ",vetor[i]);
        }
        printf("\ne os numeros corretos foram:");
        for (int i = 1; i < acertos+1; i++)
        {
            printf("%d ",arr[i]);
        }
        free(arr);
        
        
        
    }