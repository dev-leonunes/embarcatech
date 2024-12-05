#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

// Qual será o valor de MAX sendo x = 5 e y = 3?

int main()
{
    printf("%d\n", MAX(5, 3));
    return 0;
}

// Resposta correta: 5