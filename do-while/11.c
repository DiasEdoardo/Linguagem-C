#include<stdio.h>

        int main(){
            int n,i=0,m=0,x=0;
            printf("insira um numero inteiro:\n");
            scanf("%i",&n);
            do
            {
                do
                {
                    printf("*");
                    i++;
                } while (i<n);
                printf("\n");
                i=0;
                x++;
                i=x;
                m++;
            } while (m<n);
            








            return 0;
        }