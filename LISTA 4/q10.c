#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_TAM 5

void inicializa_vetor(int *vetor_X, int tam_vetor) {

    for (int i = 0; i < tam_vetor; i++) {

        *(vetor_X + i) = (rand() % (N_TAM));

    }

}

void imprime_vetor (int *vetor, int tam_vetor) {

    for (int i = 0; i < tam_vetor; i++) {

        printf("Vetor[%d]: %d\n", i, *(vetor + i));

    }

    printf("\n");

}

void ordena_vetor(int *vet, int tam_vetor) {

    for (int k = 0; k < tam_vetor; k++) {

        for (int j = 0; j < tam_vetor - 1; j++) {

            if (*(vet + j) > *(vet + j + 1)) {

                *(vet + j) = *(vet + j) ^ *(vet + j + 1);
                *(vet + j + 1) = *(vet + j) ^ *(vet + j + 1);
                *(vet + j) = *(vet + j) ^ *(vet + j + 1);

            }

        }

    }

}

void armazena_ocorrencias_em_F (int *vetor_F, int *vetor_X, int tamanho_vetor_x) {


    for (int i = 0; i < tamanho_vetor_x; i++) {

     (*(vetor_F + (*(vetor_X + i))))++;

    }

    imprime_vetor(vetor_F, N_TAM);

}

int main() {

    int *pv = NULL;
    int vetor_F[N_TAM] = {0};
    int tamanho_vetor;

    printf("Digite o tamanho do vetor a ser criado: ");
    scanf("%d", &tamanho_vetor);
    
    pv = malloc(tamanho_vetor * sizeof(int));

    if (!pv) {

        printf("Nao ha memoria disponivel.");
        exit(1);

    }

    int vetor_X[tamanho_vetor];

    srand(time(NULL));
    inicializa_vetor(vetor_X, tamanho_vetor);

    imprime_vetor(vetor_X, tamanho_vetor);

    armazena_ocorrencias_em_F(vetor_F, vetor_X, tamanho_vetor);

}