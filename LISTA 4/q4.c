#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5


void inteiro(int *pon[]) {

    for (int i = 0; i < TAM; i++) {

        printf("Digite valores, vetor[%d]: ", i);
        scanf("%d", (pon + i));

    }

    for (int i = 0; i < TAM; i++) {

        printf("VALORES, VETOR[%d]: %d\n", i, *(pon + i));

    }


    for (int i = 0; i < TAM; i++) {

        printf("ENDERECOS, VETOR[%d]: %d\n", i, pon + i);

    }


}

void charactere(char *pon[]) {

    for (int i = 0; i < TAM; i++) {

        printf("Digite valores, vetor[%d]: ", i);
        // Limpe o buffer de entrada
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        scanf("%c", (pon + i));

    }

    for (int i = 0; i < TAM; i++) {

        printf("VALORES, VETOR[%d]: %c\n", i, *(pon + i));

    }


    for (int i = 0; i < TAM; i++) {

        printf("ENDERECOS, VETOR[%d]: %d\n", i, pon + i);

    }

}

int main() {

    int vetor_int[TAM];
    char vetor_char[TAM];

    inteiro(vetor_int);

    charactere(vetor_char);
    

}