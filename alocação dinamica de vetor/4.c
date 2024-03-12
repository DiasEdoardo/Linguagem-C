#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeVowels(char* str) {
    int len = strlen(str);
    char* result = (char*)malloc(len + 1);
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';
    return result;
}

int main() {
    int size;
    printf("Enter the size of the string: ");
    scanf("%d", &size);

    char* str = (char*)malloc(size + 1);
    printf("Enter the string: ");
    scanf(" %[^\n]", str);

    char* result = removeVowels(str);
    printf("String without vowels: %s\n", result);

    free(str);
    free(result);

    return 0;
} 