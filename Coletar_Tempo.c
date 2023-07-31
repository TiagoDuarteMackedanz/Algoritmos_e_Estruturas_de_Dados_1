#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio, fim;
    double tempo_decorrido;

    // Início da contagem de tempo
    inicio = clock();

    // Trecho de código cujo tempo de execução será medido
    for (int i = 0; i < 1000000000; i++) {
        // Operações a serem realizadas
    }

    // Fim da contagem de tempo
    fim = clock();

    // Cálculo do tempo decorrido em segundos
    tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo decorrido: %f segundos\n", tempo_decorrido);

    return 0;
}