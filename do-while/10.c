#include<stdio.h>

        int main(){
            int n,m,i=0,j=0,k=0,l=0;
            printf("insira a altura do retângulo:\n");
            scanf("%i",&n);
            printf("insira a largura do retângulo:\n");
            scanf("%i",&m);

            do
            {
            
            do
            {
            printf("*");
            i++;
            } while (i<m);
            i=0;
            printf("\n");
            j++;
            } while (j<m);



        return 0;
        }