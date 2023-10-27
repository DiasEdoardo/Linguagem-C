#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    int trocas = 0;
    int interacoes = 0;
    int trocou;

    for (i = 0; i < n-1; i++) {
        trocou = 0;

        for (j = 0; j < n-i-1; j++) {
            interacoes++;
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                trocas++;
                trocou = 1;
            }
        }

        
        if (trocou == 0)
            break;
    }

    printf("\nBubble Sort Melhorado:\n");
    printf("Número de trocas: %d\n", trocas);
    printf("Número de interações: %d\n", interacoes);
}

void selectionSort(int arr[], int n) {
    int i, j;
    int trocas = 0;
    int interacoes = 0;

    for (i = 0; i < n-1; i++) {
        int min_idx = i;

        for (j = i+1; j < n; j++) {
            interacoes++;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
        trocas++;
    }

    printf("\nSelection Sort:\n");
    printf("Número de trocas: %d\n", trocas);
    printf("Número de interações: %d\n", interacoes);
}

void insertionSort(int arr[], int n) {
    int i, j;
    int trocas = 0;
    int interacoes = 0;

    for (i = 1; i < n; i++) {
        int key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            interacoes++;
            arr[j+1] = arr[j];
            j--;
            trocas++;
        }

        arr[j+1] = key;
    }

    printf("\nInsertion Sort:\n");
    printf("Número de trocas: %d\n", trocas);
    printf("Número de interações: %d\n", interacoes);
}

void quickSort(int arr[], int low, int high) {
    int i, j, pivot, temp;
    int trocas = 0;
    int interacoes = 0;

    if (low < high) {
        pivot = low;
        i = low;
        j = high;

        while (i < j) {
            interacoes++;
            while (arr[i] <= arr[pivot] && i <= high)
                i++;

            while (arr[j] > arr[pivot])
                j--;

            if (i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                trocas++;
            }
        }

        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        trocas++;

        quickSort(arr, low, j-1);
        quickSort(arr, j+1, high);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 45, 78, 36,
                 72, 48, 60, 92, 6, 87, 15, 98, 51, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Vetor original:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Bubble Sort Melhorado
    int arr_bubble[n];
    for (int i = 0; i < n; i++)
        arr_bubble[i] = arr[i];
    bubbleSort(arr_bubble, n);

    // Selection Sort
    int arr_selection[n];
    for (int i = 0; i < n; i++)
        arr_selection[i] = arr[i];
    selectionSort(arr_selection, n);

    // Insertion Sort
    int arr_insertion[n];
    for (int i = 0; i < n; i++)
        arr_insertion[i] = arr[i];
    insertionSort(arr_insertion, n);

    // Quick Sort
    int arr_quick[n];
    for (int i = 0; i < n; i++)
        arr_quick[i] = arr[i];
    quickSort(arr_quick, 0, n-1);

    printf("\n\nVetor ordenado usando Quick Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr_quick[i]);

    return 0;
}
