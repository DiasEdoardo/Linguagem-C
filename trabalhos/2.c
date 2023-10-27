#include<stdio.h>
        int main(){
        int a,b,c,soma,x=180,y=90;
        printf("insira o valor de a:");
        scanf("%i",&a);
        printf("insira o valor de b:");
        scanf("%i",&b);
        printf("insira o valor de c:");
        scanf("%i",&c);
        soma=a+b+c;
        if(soma==x){
            printf("Forma um triangulo");
                if(a==y || b==y || c==y ){
                    printf("\ne um triangulo retangulo");
                }else if(a<y && b<y && c<y){
                printf("é um retangulo acutangulo");
                }
                else if(a>y || b>y || c>y){
                    printf("e um obtusangulo");
                }
        }else{
        printf("a soma dos angulos nao formam um triangulo");
        }
        return 0;



        }
