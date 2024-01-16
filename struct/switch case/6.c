#include<stdio.h>
        int main(){
            int x,y,z=0;
            printf("Qual região voce deseja viajar?\n1-Regiao Norte\n2-Regiao Nordeste\n3-Regiao Centro-Oeste\n4-Regiao Sul\n");
            scanf("%i",&x);
            switch (x)
            {
            case 1:
                printf("Voce selecionou a Regiao Norte!Se deseja ida e volta clique 1, caso contrário clique 2");
                scanf("%i",&y);
                switch (y)
                {
                case 1:
                z=900.00;
                    printf("Voce selecionou a Viagem Regiao Norte ida e volta, A viagem fica R$ %i",z);
                    break;
                case 2:
                z=500.00;
                printf("Voce selecionou a Viagem Regia Norte apenas ida, a viagem fica R$ %i",z);
                    break;
                default:
                printf("opcao invalida, tente novamente");
                    break;
                }
                break;
                case 2:
                printf("Voce selecionou a Regiao Nordeste!Se deseja ida e volta clique 1, caso contrário clique 2");
                scanf("%i",&y);
                switch (y)
                {
                case 1:
                z=650.00;
                    printf("Voce selecionou a Viagem Regiao Nordeste ida e volta, A viagem fica R$ %i",z);
                    break;
                case 2:
                z=350.00;
                printf("Voce selecionou a Viagem Regia Nordeste apenas ida, a viagem fica R$ %i",z);
                    break;
                default:
                printf("opcao invalida, tente novamente");
                    break;
                }
                break;
                case 3:
                printf("Voce selecionou a Regiao Centro-Oeste!Se deseja ida e volta clique 1, caso contrário clique 2");
                scanf("%i",&y);
                switch (y)
                {
                case 1:
                z=600.00;
                    printf("Voce selecionou a Viagem Regiao Centro-Oeste ida e volta, A viagem fica R$ %i",z);
                    break;
                case 2:
                z=350.00;
                printf("Voce selecionou a Viagem Regia Centro-Oeste apenas ida, a viagem fica R$ %i",z);
                    break;
                default:
                printf("opcao invalida, tente novamente");
                    break;
                }
                break;
                case 4:
                printf("Voce selecionou a Regiao Sul!Se deseja ida e volta clique 1, caso contrário clique 2");
                scanf("%i",&y);
                switch (y)
                {
                case 1:
                z=550.00;
                    printf("Voce selecionou a Viagem Regiao Sul ida e volta, A viagem fica R$ %i",z);
                    break;
                case 2:
                z=300.00;
                printf("Voce selecionou a Viagem Regia Sul apenas ida, a viagem fica R$ %i",z);
                    break;
                default:
                printf("opcao invalida, tente novamente");
                    break;
                }
                break;
            
            default:
            printf("opcao invalida, tente novamente!");
                break;
            }
            return 0;
        }