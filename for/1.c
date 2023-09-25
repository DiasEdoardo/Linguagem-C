#include<stdio.h>

    int main(){
        int num,i,tab;
        
        printf("insira o número que deseja saber a tabuada:");
        scanf("%i",&num);
        for ( i = 0; i <= 10; i++)
        {
            tab=num*i;
            printf("%i x %i = %i\n",num,i,tab);
        }
        
        return 0;



    }