#include <stdio.h>

// Fazer um programa que lê um valor, um operador e outro valor e imprime o resultado da operação.

int main()
{
    float n1, n2;
    char op;

    printf("Entre com um numero: ");
    scanf("%f", &n1);
    printf("Entre com outro numero: ");
    scanf("%f", &n2);

    printf("Entre com um operador (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("A soma dos numeros e: %.2f\n", n1 + n2);
        break;
    case '-':
        printf("A subtracao dos numeros e: %.2f\n", n1 - n2);
        break;
    case '*':
        printf("A multiplicacao dos numeros e: %.2f\n", n1 * n2);
        break;
    case '/':
        printf("A divisao dos numeros e: %.2f\n", n1 / n2);
        break;
    default:
        printf("Operador invalido\n");
        break;
    }
}