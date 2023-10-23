#include <stdio.h>

void soma(int *num1, int *num2, int *result) {

    *result = *num1 + *num2;

}

int main() {

    int n1, n2;
    int res;

    printf("Digite o número 1: ");
    scanf("%d", &n1);

    printf("Digite o número 1: ");
    scanf("%d", &n2);

    soma(&n1, &n2, &res);

    printf("A soma dos números é: %d\n", res);
    printf("Endereço de memória da reposta: %p\n", &res);



}