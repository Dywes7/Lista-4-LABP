#include <stdio.h>
#include <string.h>

#define TAM 40

void concatenar_string(char *p1, char *p2) {

    strcat(p1, p2);

}

int main() {

    char palavra_1[TAM];
    char palavra_2[TAM];

    printf("Digite a string 1: ");
    gets(palavra_1);

    printf("Digite a string 2: ");
    gets(palavra_2);

    concatenar_string(palavra_1, palavra_2);

    printf("PALAVRA_2: %s", palavra_1);
   
   

}