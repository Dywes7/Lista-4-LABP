#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ALEATORIO 0
#define MAX_ALEATORIO 100
#define TAM 20

void inicializa_vetor(int *vet) {

    for (int i = 0; i < TAM; i++) {

        *(vet + i) = MIN_ALEATORIO + (rand() % MAX_ALEATORIO);

    }

}

void imprime_vetor(int *vet) {

    for (int i = 0; i < TAM; i++) {

        printf("[%p]: %d\n", (vet + i), *(vet + i));

    }

    printf("\n");

}

void ordena_vetor(int *vet) {

    for (int k = 0; k < TAM; k++) {

        for (int j = 0; j < TAM - 1; j++) {

            if (*(vet + j) > *(vet + j + 1)) {

                *(vet + j) = *(vet + j) ^ *(vet + j + 1);
                *(vet + j + 1) = *(vet + j) ^ *(vet + j + 1);
                *(vet + j) = *(vet + j) ^ *(vet + j + 1);

            }

        }

    }

}

int main() { 

    int vetor[TAM];

    srand(time(NULL));
    inicializa_vetor(vetor);

    // ANTES DA REORDENAÇÃO
    imprime_vetor(vetor);

    ordena_vetor(vetor);

    // POS ORDENAÇÃO
    imprime_vetor(vetor);


}