#include <stdio.h>
#include <string.h>

#define TAM 20

void tamanho_string(char *p) {

    printf("Tamanho da string é: %d", strlen(p));

}

int main() {

    char palavra[TAM];

    printf("Digite a string: ");
    gets(palavra);

    tamanho_string(palavra);

}