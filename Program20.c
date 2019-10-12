#include <stdio.h>

short entrada();
void calcular(int impar, int soma, int i, int n), visualizar(int soma);

//Método principal
void main()
{
        //Podia declarar as variáveis com "short", pois "int" é muito grande
        int n, i = 0, impar = -1, soma = 0;
        //Podia atribuir valor na declaração
        /*soma=0;
        i=0;
        impar = -1;
        */

        n = entrada();
        calcular(impar, soma, i, n);
}

//Método para receber dado do teclado
short entrada()
{
        short n;
        printf("Digite o valor\n");
        scanf("%d", &n);

        return n;
}

//Método para calcular
void calcular(int impar, int soma, int i, int n)
{
        do
        {
                impar = impar + 2;
                soma += impar;
                i++;
        } while (i < n);
        {
                visualizar(soma);
        }
}

//Método para imprimir a quadrado
void visualizar(int soma)
{
        printf("Quadrado=%d\n", soma);
}