#include <stdio.h>

int main() {
    int matriz[5][5];
    int valorX;
    int i, j;
    int encontrado = 0;

    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }


    printf("Digite o valor X a ser buscado: ");
    scanf("%d", &valorX);

    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == valorX) {
                printf("O valor %d foi encontrado na linha %d e coluna %d.\n", valorX, i, j);
                encontrado = 1; 
                break; 
            }
        }
        if (encontrado) {
            break; 
        }
    }

    if (!encontrado) {
        printf("O valor %d não foi encontrado na matriz.\n", valorX);
    }

    return 0;
}
