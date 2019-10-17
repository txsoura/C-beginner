//Exercício 1 do slide
#include <stdio.h>

void main()
{
    short n[5];

    for (short i = 0; i < 5; i++)
    {
        printf("Digite o %hio numero\n", i + 1);
        scanf("%hi", &n[i]);
    }

    for (short i = 0; i < 5; i++)
    {
        printf("&hi", n[i]);
    }
}