#include <stdio.h>
#include <math.h>

// Calcular o delta = b² - 4*a*c de uma
// equação do segundo grau.

int main()
{
    double a, b, c, delta;

    printf("Digite os coeficientes da equacao de segundo grau (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    printf("O valor do delta e: %.2lf\n", delta);
    return 0;
}