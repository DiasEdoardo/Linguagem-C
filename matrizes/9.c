#include <stdio.h>

int main() {
    int matriz[3][3], transposta[3][3];

    printf("Digite os elementos da matriz:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz escrita é:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("A matriz transposta é:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            transposta[j][i] = matriz[j][i];
            printf("%d ", transposta[j][i]);
        }
        printf("\n");
    }

    return 0;
}