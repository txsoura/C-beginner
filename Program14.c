//Excercício 3.8
#include "stdio.h"

void main()
{
    short a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite um numero:\n");
    scanf("%hi", &n);
    printf("Serie de Fibonacci:\n");
    printf("%hi\n", b);

    for (i = 0; i < n; i++)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%hi\n", auxiliar);
    }
}