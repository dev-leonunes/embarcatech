#include <stdio.h>
#include <math.h>

// Fazer um programa em C que leia dois números e informe:

int main()
{
    double n1, n2;
    printf("Entre com dois numeros (Ex: 2, 3 ou 2.5, 4.2): ");
    scanf("%lf, %lf", &n1, &n2);

    // a) A soma dos números
    double sum = n1 + n2;
    printf("A soma dos numeros e: %.2lf\n", sum);

    // b) O produto do primeiro número pelo quadrado do outro
    double prod = n1 * pow(n2, 2);
    printf("O produto do primeiro numero pelo quadrado do outro e: %.2lf\n", prod);

    // c) O quadrado do primeiro número
    double quad = pow(n1, 2);
    printf("O quadrado do primeiro numero e: %.2lf\n", quad);

    // d) A raiz quadrada da soma dos quadrados
    double raiz = sqrt(pow(n1, 2) + pow(n2, 2));
    printf("A raiz quadrada da soma dos quadrados e: %.2lf\n", raiz);

    // e) O seno da diferença do primeiro número pelo segundo
    double seno = sin(n1 - n2);
    printf("O seno da diferenca do primeiro numero pelo segundo e: %.2lf\n", seno);

    // f) O módulo do primeiro número
    double mod = fabs(n1);
    printf("O modulo do primeiro numero e: %.2lf\n", mod);
}