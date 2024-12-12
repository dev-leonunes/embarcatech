#include <stdio.h>
#include <limits.h>

// Faça um programa (utilizand a estrutura for) que leia 10 valores inteiro e:
// Encontre e mostre o maior valor
// Encontre e mostre o menor valor
// Calcule a media dos numeros lidos

int main()
{
    int i, num, maior = INT_MIN, menor = INT_MAX;
    float media, soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;

        if (num > maior)
        {
            maior = num;
        }

        if (num < menor)
        {
            menor = num;
        }
    }

    media = soma / 10;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);
}