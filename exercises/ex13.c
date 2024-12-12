#include <stdio.h>

// Faça uma função que recebe um valor inteiro e verifica se o valor é par ou impar.
// A função deve retornar 1 se o valor for par e 0 se for impar.

int parOuImpar(int valor)
{
    if (valor % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf(parOuImpar(valor) ? "O valor e par\n" : "O valor e impar\n");
}