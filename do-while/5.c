#include<stdio.h>

        int main(){
            int n,cont=0,t;
            printf("escreva um número para saber a sua tabuada até o 10:\n");
            scanf("%i",&n);
            do
            {
                t=cont*n;
                printf("%ix%i=%i\n",n,cont,t);
                cont++;
            } while (cont<=10);
            
        return 0;
        }