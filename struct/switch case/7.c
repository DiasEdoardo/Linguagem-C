#include<stdio.h>

        int main(){
        int x,y,z;
        float p,b;
        printf("Qual o seu peso?");
        scanf("%f",&p);
        printf("Qual planeta voce deseja sbaer o seu peso nele?\n1-Mercurio\n2-Venus\n3-Marte\n4-Jupiter\n5-Saturno\n6-Urano\n");
        scanf("%i",&x);
        switch (x)
        {
        case 1:
            b=p*0.37;
            printf("o seu peso em mercurio e %2.f",b);
            break;
        case 2:
            b=p*0.88;
            printf("o seu peso em venus e %2.f",b);
            break;
        case 3:
            b=p*0.38;
            printf("o seu peso em Marte e %2.f",b);
            break;
        case 4:
            b=p*2.64;
            printf("o seu peso em jupiter e %2.f",b);
            break;
        case 5:
            b=p*1.15;
            printf("o seu peso em saturno e %2.f",b);
            break;
        case 6:
            b=p*1.17;
            printf("o seu peso em urano e %2.f",b);
            break;
        default:
        printf("opcao invalida, tente novamente!");
            break;
        }





            return 0;
        }