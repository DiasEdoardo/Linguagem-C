#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROWS 5
#define NUM_COLS 5

int main() {
    int cartela[NUM_ROWS][NUM_COLS];
    int numerosSorteados[100] = {0}; 
    int numSorteados = 0;

    
    srand(time(NULL));

    
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            int numero;
            do {
                numero = rand() % 100; 
            } while (numerosSorteados[numero] == 1); 

            cartela[i][j] = numero;
            numerosSorteados[numero] = 1;
            numSorteados++;
        }
    }

    
    printf("Cartela de Bingo:\n");
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            printf("%2d\t", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
