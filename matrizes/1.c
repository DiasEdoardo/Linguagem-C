#include<stdio.h>
    
    int main(){
        int matriz[4][4],soma=0,i=0,j=0;

        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 4; j++)
            {
                printf("defina o valor da matriz[%i][%i]",i,j);
                scanf("%i",&matriz[i][j]);
                soma=soma+matriz[i][j];
            }
            
        }
        printf("a soma final é %i",soma);
        
        return 0;
        
    }