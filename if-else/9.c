#include<stdio.h>

    int main(){
        float n1,n2,media;
        printf("insira as duas notas");
        scanf("%f %f",&n1,&n2);
        media=n1+n2;
        media=media/2;
        if (media < 5)
        {
            printf("Reprovado!");
        }
         else if (media > 5 && media <6)
        {
            printf("Exame");
        }
         else if (media > 7 && media <=10)
        {
            printf("Aprovado!");
        }
        else{
            printf("NOTA INVÁLIDA!TENTE NOVAMENTE!");

        }
        
        return 0;

    }