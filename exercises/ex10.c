#include <stdio.h>

// Faça um programa que lê 2 valores e imprime:
// Se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo valor.
// Se o primeiro valor for maior que o segundo, a lista de valores do segundo até o primeiro valor.

int main()
{
    int a, b;
    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = a; i >= b; i--)
        {
            printf("%d ", i);
        }
    }

    return 0;
}