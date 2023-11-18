#include <stdio.h>
#include <string.h>

void print_palavra(char palavra[], int letras_reveladas) {
    int tamanho = strlen(palavra);
    for(int i = 0; i < tamanho; i++) {
        if(i < letras_reveladas) {
            printf("%c", palavra[i]);
        } else {
            printf("*");
        }
        if(i < tamanho - 1) {
            printf("|");
        }
    }
    printf("\n");
}

void print_menu(char palavras[5][20], int letras_reveladas[5]) {
    printf("\nPalavras do jogo:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d. ", i+1);
        print_palavra(palavras[i], letras_reveladas[i]);
    }
    printf("\n");
}

int main() {
    char palavras[5][20] = {"brasil", "russia", "china", "india", "africa do sul"};
    char dicas[5][50] = {"pais onde moramos", "antiga URSS", "segunda maior economia do mundo", "tem 18 idiomas oficiais", "possui a moeda rand como oficial"};
    char tentativa[20];
    int acertos = 0;
    int letras_reveladas[5] = {0, 0, 0, 0, 0};
    int escolha;

    printf("Bem-vindo ao jogo de palavras! Tente adivinhar as palavras com base nas dicas. Você tem duas tentativas por palavra.\n");

    print_menu(palavras, letras_reveladas);

    for(int i = 0; i < 5; i++) {
        do {
            printf("Escolha a palavra que voce quer tentar adivinhar (1-5): ");
            scanf("%d", &escolha);

            
            if (escolha < 1 || escolha > 5) {
                printf("Escolha invalida. Por favor, escolha um numero de 1 a 5.\n");
            }
        } while (escolha < 1 || escolha > 5);

        escolha--;  
        getchar();

        printf("\nDica: %s\n", dicas[escolha]);
        
        for(int j = 0; j < 2; j++) {
            printf("Digite sua tentativa: ");
            fgets(tentativa, 20, stdin);
            tentativa[strcspn(tentativa, "\n")] = 0;  

            if(strcmp(tentativa, palavras[escolha]) == 0) {
                printf("Parabens, voce acertou! A palavra era: ");
                print_palavra(palavras[escolha], strlen(palavras[escolha]));
                acertos++;
                letras_reveladas[escolha] = strlen(palavras[escolha]);
                break;
            } else {
                printf("Tentativa incorreta. ");
                if(j == 0) {
                    printf("Tente novamente.\n");
                    letras_reveladas[escolha] = strlen(palavras[escolha]) / 2;
                } else {
                    printf("A palavra correta era: ");
                    print_palavra(palavras[escolha], strlen(palavras[escolha]));
                    letras_reveladas[escolha] = strlen(palavras[escolha]);
                }
            }
        }
        print_menu(palavras, letras_reveladas);
    }

    printf("\nFim do jogo! Voce acertou %d de 5 palavras.\n", acertos);

    return 0;
}
