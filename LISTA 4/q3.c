#include <stdio.h>

void verifica_menor(int *val, int *menor_val) {

    if (*val < *menor_val) {

        *menor_val = *val;

    }

}

int main() {

    int valor;
    int menor_valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    menor_valor = valor;

    while(1) {
        
        printf("Menor numero ate agora: %d\n", menor_valor);

        printf("Digite um valor inteiro (0 para ENCERRAR): ");
        scanf("%d", &valor);

        if (valor == 0) {

            break;

        }

        verifica_menor(&valor, &menor_valor);


    }

 
}