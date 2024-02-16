#include<stdio.h>
#include<stdlib.h>

//GETS DANDO ERRO
//NOME JUNTO DO MAIOR VALOR/QUANTIDADE

struct produto
{
    int codigo;
    char nome[50];
    int quant;
    float valor;
};
typedef struct produto produto;

void cadastrar_produtos(produto *produtos, int n,float *maior, int *maiorq){
    for (int i = 0; i < n; i++)
    {
    printf("Qual o nome do produto cadastrado?\n");
    /*/gets(produtos[i].nome);
    fflush(stdin);
    /*/
    scanf("%s",&produtos[i].nome);  
    printf("Qual a quantidade?\n");
    scanf("%i",&produtos[i].quant);
    printf("Qual o codigo?\n");
    scanf("%i",&produtos[i].codigo);
    printf("Qual o valor?\n");
    scanf("%f",&produtos[i].valor);
    }

    *maior=produtos[0].valor;
    for (int i = 0; i < n; i++)
    {
        
        if (produtos[i].valor>*maior)
        {
            *maior=produtos[i].valor;
        }
        

    }

    *maiorq=produtos[0].quant;
    for (int i = 0; i < n; i++)
    {
        if (produtos[i].quant>*maiorq)
        {
            *maiorq=produtos[i].quant;
        }
        
    }
    

    
    
}

int main()
{
    int n;
    printf("Quantos produtos serao cadastrados?\n");
    scanf("%i",&n);
    produto *produtos;
    float maior;
    int maiorq;
    produtos = (produto *)malloc(n *sizeof(produto));
    if (produtos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        exit(1);
    }
    cadastrar_produtos(produtos, n,&maior,&maiorq);
    printf("maior valor = %.2f\n",maior);
    printf("maior quantidade = %i",maiorq);
    
    free(produtos);
    return 0;
}