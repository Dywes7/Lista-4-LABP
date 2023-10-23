#include <stdio.h>

void troca(int *num1, int *num2) {

    int segura_valor = *num1;
    *num1 = *num2;
    *num2 = segura_valor;
    
}

int main() {

    int n1, n2;

    printf("Digite o número 1: ");
    scanf("%d", &n1);

    printf("Digite o número 1: ");
    scanf("%d", &n2);

    printf("***ANTES DA TROCA***\n");
    printf("Valor de N1: %d\n", n1);
    printf("Valor de N2: %d\n", n2);

    troca(&n1, &n2);

    printf("***PÓS A TROCA***\n");
    printf("Valor de N1: %d\n", n1);
    printf("Valor de N2: %d\n", n2);

}