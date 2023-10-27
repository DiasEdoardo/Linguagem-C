float juros(float total){
   int numParcelas;
   float valorparcela;
                printf("Escolha o número de parcelas (3 a 10): ");
                scanf("%d", &numParcelas);
                if (numParcelas >= 3 && numParcelas <= 10) {
                    float juros = 0.03;  
                     valorparcela = total / numParcelas;
                    
                } else {
                    printf("Número de parcelas inválido.\n");
                }
                return valorparcela;

}
