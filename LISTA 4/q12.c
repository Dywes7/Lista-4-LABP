#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_TAM 7

void inicializa_vetor(int *vetor, int tam_vetor) {

    for (int i = 0; i < tam_vetor; i++) {

        *(vetor + i) = (rand() % (N_TAM));

    }

}

void inicializa_vetor_y(int *vetor_y, int *vetor_x, int tam_vetor) {

    for (int i = 0; i < tam_vetor; i++) {

        if ((*(vetor_x + i)) > 0 && (*(vetor_x + i)) <= 3) {

            (*(vetor_y + i)) = (*(vetor_x + i));

        } else if ((*(vetor_x + i)) <= 5) {

            (*(vetor_y + i)) = (*(vetor_x + i)) - 1;

        } else if ((*(vetor_x + i)) <= 7) {

            (*(vetor_y + i)) = (*(vetor_x + i)) + 1;

        } else if ((*(vetor_x + i)) <= 9) {

            (*(vetor_y + i)) = (*(vetor_x + i)) - 2;

        } else if ((*(vetor_x + i)) <= 10) {

            (*(vetor_y + i)) = (*(vetor_x + i)) + 2;

        }
        

    }

}

void inicializa_matriz_M(int *matriz) {

    for (int i = 0; i < N_TAM; i++) {

        for (int j = 0; j < N_TAM; j++) {

            // *(matriz + i + j) = 0;
            matriz[i * N_TAM + j] = 0;

        }

    }

}

void ocorrencias_matriz_M(int *matriz, int *vetor_x, int *vetor_y) {

    for (int i = 0; i < N_TAM; i++) {

        matriz[(*(vetor_x + i)) * N_TAM + (*(vetor_y + i))]++;

}


}


int main() {

    int MATRIX_M[N_TAM][N_TAM];
    int tamanho_vetor;
    int *pv = NULL;

    printf("Digite o tamanho dos vetores X e Y a serem criados: ");
    scanf("%d", &tamanho_vetor);
    
    pv = malloc(tamanho_vetor * sizeof(int));

    if (!pv) {

        printf("Nao ha memoria disponivel.");
        exit(1);

    }

    int vetor_X[tamanho_vetor];
    int vetor_Y[tamanho_vetor];

    srand(time(NULL));
    inicializa_vetor(vetor_X, tamanho_vetor);
    inicializa_vetor_y(vetor_Y, vetor_X, tamanho_vetor);
    inicializa_matriz_M(MATRIX_M);
    ocorrencias_matriz_M(MATRIX_M, vetor_X, vetor_Y);


    for (int i = 0; i < N_TAM; i++) {

        for (int j = 0; j < N_TAM; j++) {

            printf("%d ", MATRIX_M[i][j]);

        }
        
        printf("\n");
    }

}