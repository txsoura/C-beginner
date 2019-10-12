//Excercício 3.3
#include <stdio.h>

short entrada();
void visualizar(short n);

//Método principal
void main()
{
    short n;

    n = entrada();

    visualizar(n);
}

//Método para receber dado do teclado
short entrada()
{
    short n;
    printf("Digite o valor\n");
    scanf("%hi", &n);

    return n;
}

//Método para imprimir em ordem decrescente
void visualizar(short n)
{
    for (short i = 0; i <= n; i++)
    {
        printf("%hi ", i);
    }
}