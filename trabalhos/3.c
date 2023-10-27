#include<stdio.h>

    int main(){
    int x,y,soma,i,m;
    float s,maior;

    for(i=1;i<6;i++){
        printf("habitante numero %i \nqual a quantidade de filhos?\n",i);
        scanf("%i",&x);
        printf("qual o seu sal�rio?\n");
        scanf("%f",&s);
        // verificar se � positivo
        if(x<0 || s<0){
                x=0;
                s=0;
            i--;
            printf("Um dos valores � negativo, favor inserir novamente!\n");
        }
        soma+=x;
        //verificar qual � o maior salario
        if(maior<s){
            maior=s;
        }else if(maior>s){
        maior=maior;
        }else if(maior == s){
        maior=maior;
        }
    }
    // fazer a soma e media dos filhos
    soma+=x;
    m=soma/5;
    printf("a media dos filhos dos habitantes e %i",m);
    printf("o maior salario � %f",s);


    return 0;
    }
