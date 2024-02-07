#include <stdio.h>

int ehPrimo(int n) {
    if (n <= 1) return 0; 

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; 
    }

    return 1; 
}

void primo(int m, int *p1, int *p2) {
    for (int i = m - 1; i >= 2; i--) {
        if (ehPrimo(i)) {
            *p1 = i;
            break;
        }
    }

    for (int i = m + 1;; i++) {
        if (ehPrimo(i)) {
            *p2 = i;
            break;
        }
    }
}

int main() {
    int m, p1, p2;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("O maior número primo menor que %d é: %d\n", m, p1);
    printf("O menor número primo maior que %d é: %d\n", m, p2);

    return 0;
}
