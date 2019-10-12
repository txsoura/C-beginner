//Excercício 3.9
#include <stdio.h>

void visualizar(short m, short n);
short entrada(char msg[20]);

//Método principal
void main()
{
    int m, n;

    // printf("Digite o valor da altura\n");
    // scanf("%d", &m);

    // printf("Digite o valor da base\n");
    // scanf("%d", &n);
    m = entrada("Digite o valor da altura\n");
    n = entrada("Digite o valor da base\n");
    visualizar(m, n);
}

//Método para receber dado do teclado
short entrada(char msg[20])
{
    short x;
    printf(msg);
    scanf("%d", &x);

    return x;
}

//Método para visualizar
void visualizar(short m, short n)
{
    for (short i = 0; i < m; i++)
    {
        printf("|_|");
        for (short j = 1; j < n; j++)
        {
            printf("_|");
        }
        printf("\n");
    }
}