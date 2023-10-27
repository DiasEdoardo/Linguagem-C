#include<stdio.h>

        int main(){
            int a[5]={0,0,0,0,0},b[5]={0,0,0,0,0},c[5]={0,0,0,0,0},i,soma=0;
            for ( i = 0; i < 5; i++)
            {
                printf("insira um numero inteiro para a posiçao %i do vetor A",i);
                scanf("%i",&a[i]);
                printf("insira um numero inteiro para a posiçao %i do vetor B",i    );
                scanf("%i",&b[i]);
                c[i]=a[i]+b[i];
                printf("%i ,posição %i\n",c[i],i);
            }
            


            return 0;
        }