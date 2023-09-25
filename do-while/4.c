#include <stdio.h>

int main() {
    int contador = 1;
    int numero;       
    int maior = 0;    

    printf("Digite o 1º número: ");
    scanf("%d", &maior);
    while (contador < 10) {
        printf("Digite o %dº número: ", contador + 1);
        scanf("%d", &numero);

        
        if (numero > maior) {
            maior = numero; 
        }

        contador++; 
    }

    
    printf("O maior valor lido é: %d\n", maior);

    return 0;
}
