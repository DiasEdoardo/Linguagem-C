#include <stdio.h>

int main() {
    int numeros[10];
    int maior;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

    
        if (i == 0) {
            maior = numeros[i];
        } else {
            
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
        }
    }
    printf("O maior número digitado é: %d\n", maior);

    return 0;
}
