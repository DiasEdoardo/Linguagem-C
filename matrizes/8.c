#include <stdio.h>

int main() {
    int n = 10; 
    int matriz[10][10];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                matriz[i][j] = 2 * i + 7 * j - 2;
            } else if (i == j) {
                matriz[i][j] = 3 * i * i - 1;
            } else {
                matriz[i][j] = 4 * i * i * i - 5 * j * j + 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {   
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
