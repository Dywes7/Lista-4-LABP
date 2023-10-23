#include <stdio.h>
#include <string.h>

#define TAM 20

void copiar_string(char *p1, char *p2) {

    strcpy(p2, p1);

}

int main() {

    char palavra_1[TAM];
    char palavra_2[TAM];

    printf("Digite a string 1: ");
    gets(palavra_1);

    printf("Digite a string 2: ");
    gets(palavra_2);

    copiar_string(palavra_1, palavra_2);

    printf("PALAVRA_2: %s", palavra_2);
   
   

}