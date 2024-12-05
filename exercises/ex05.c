#include <stdio.h>
#include <math.h>

// Calcular a área de uma circunferência
// (área = π * r²).

#define PI 3.14159

int main()
{
    double raio, area;

    printf("Digite o raio da circunferencia: ");
    scanf("%lf", &raio);

    area = PI * pow(raio, 2);

    printf("A area da circunferencia e: %.2lf\n", area);
    return 0;
}