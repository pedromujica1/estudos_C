/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void insertionSort(char arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];          // O elemento a ser inserido na posição correta
        j = i - 1;

        // Move os elementos do arr[0..i-1] que são maiores que key
        // para uma posição à frente de sua posição atual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  // Coloca o key na posição correta
    }
}

void printArray(char arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    char arr[] = {'n', 'a', 'k','z','x'};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Array ordenado: ");
    printArray(arr, n);

    return 0;
}
