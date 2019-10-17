//Exercício 2 do slide
#include <stdio.h>

void main(){
    short tamanho;
    printf("Digite o tamanho de vector");
    scanf("%hi",&tamanho);

    short n[tamanho],media;

    for (short i = 0; i < tamanho; i++)
    {
        printf("Digite o %hio numero\n", i + 1);
        scanf("%hi", &n[i]);
    }

    for (short i = 0; i < tamanho; i++)
    {
        media+= n[i];
    }
    media=media/tamanho;
    printf("A media e: %hi",media);
}