#include<stdio.h>
#include<stdlib.h>

int main (){
        float x,y,soma,sub,mult,div,mult2;
        int opcao;
        do
        {
            /* code */
        
        
        printf("Qual numero voce deseja calcular?");
        scanf("%f",&x);
        printf("Qual numero voce deseja calcular?");
        scanf("%f",&y);
        printf("Qual operaçao vc deseja usar?\n1-Soma\n2-Subtracao\n3-Multiplicaçao\n4-Divisao\n");
        scanf("%i",&opcao);
        switch (opcao)
        {
        case 1:
        soma=x+y;
        printf("a soma dos numeros é: %f\n",soma);
            break;
        case 2:
        sub=x-y;
        printf("a subtraçao dos numeros é: %f\n",sub);
            break;
        case 3:
        mult=x*y;
        printf("a multiplicaçao dos numeros é: %f\n",mult);
            break;
        case 4:
        div=x/y;
         printf("a divisao dos numeros é: %f\n",div);
            break;
        
        default:
        printf("invalido,tente novamente !");
            break;
        }
        } while (opcao<1 || opcao >4);  
        return 0;    

}