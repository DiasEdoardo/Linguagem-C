#include<stdio.h>

    void frac(float num,int* inteiro, float* fraci){
        *inteiro=num;
        *fraci = num - *inteiro;


    }

    int main(){
        float num,fraci;
        int inteiro;
        printf("informe um valor com casas decimais:\n");
        scanf("%f",&num);
        frac(num,&inteiro,&fraci);
        printf("parte inteiro %i, parte fracionaria %f\n",inteiro,fraci);
    	return 0;
        
    }