#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    FILE *arquivo;

    arquivo = fopen("text.txt", "r");

    if (arquivo == NULL)
    {
        perror("Erro ao abrir fiheiro.\n");
        exit(EXIT_FAILURE);
    }
    fclose(arquivo);
}