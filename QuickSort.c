#include <stdio.h>

// Função para trocar dois elementos em um array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para escolher o pivô e particionar o array em torno do pivô
int partition(int vetor[], int comeco, int fim) {
    int pivot = vetor[fim];
    int i = comeco - 1;

    for (int j = comeco; j <= fim - 1; j++) {
        if (vetor[j] <= pivot) {
            i++;
            swap(&vetor[i], &vetor[j]);
        }
    }

    swap(&vetor[i + 1], &vetor[fim]);
    return i + 1;
}

// Função recursiva para ordenar o array usando Quick Sort
void quickSort(int vetor[], int comeco, int fim) {
    if (comeco < fim) {
        int pi = partition(vetor, comeco, fim);
        quickSort(vetor, comeco, pi - 1);
        quickSort(vetor, pi + 1, fim);
    }
}