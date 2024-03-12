#include<stdio.h>
#include<stdlib.h>

    int main(){
        int n,m=0;
        printf("digite o tamanho do vetor\n");
        scanf("%d",&n);
        int *array = (int *)malloc(n * sizeof(int));
        int x;
        printf("digite os elementos do vetor:\n");
        for (int i = 0; i < n; i++)
        {
            printf("elemento %d:\n",i+1);
            scanf("%d",&array[i]);
        }
        
        printf("digite um numero para descobrir os multiplos desse numero que existem no vetor:\n");
        scanf("%d",&x);
        for (int i = 0; i < n; i++)
        {
            if (array[i] % x == 0)
            {
                printf("%d é multiplo\n",array[i]);
            m++;
            }
            
        }
        printf("existem %d multiplos de %d no vetor\n",m,x);
        
        free(array);


    }