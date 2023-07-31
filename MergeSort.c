#include <stdio.h>

// Função para mesclar duas sublistas ordenadas em uma lista ordenada
void merge(int vetor[], int comeco, int meio, int fim) {
    // Implementação da mesclagem (já fornecida anteriormente)
}

// Função recursiva para dividir a lista em sublistas e chamar a função merge
void mergeSort(int vetor[], int comeco, int fim) {
    if (comeco < fim) {
        int meio = (fim + comeco) / 2;
        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio + 1, fim);
        merge(vetor, comeco, meio, fim);
    }
}
