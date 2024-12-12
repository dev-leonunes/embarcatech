#include <stdio.h>
#include <math.h>

// Faça uma função que recebe por parametros o raio de uma esfera e calcula o seu volume

float calcVol(float raio)
{
    float PI = 3.14159, volume;
    volume = (4.0 / 3.0) * PI * pow(raio, 3);
    return volume;
}

int main()
{
    float raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = calcVol(raio);

    printf("O volume da esfera e: %.2f\n", volume);
}