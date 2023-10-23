#include <stdio.h>
#include <string.h>
#define TAM 20

void buscar_caractere(char *ponteiro) {
    
    char caractere;

    printf("Qual caractere deseja buscar? ");
    scanf("%c", &caractere);

    for (int i = 0; i < TAM; i++) {

        if (*(ponteiro + i) == caractere) {

            printf("Existe o caractere '%c' na posicao %d do vetor.\n", caractere, i);

        }

    }

}

int main() {

    char palavra[TAM];
    
    printf("Digite uma string: ");
    gets(palavra);

    buscar_caractere(palavra);

}