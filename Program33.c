#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main(){
    FILE *arquivo;

    arquivo = fopen("text2.txt", "a");

    if (arquivo == NULL)
    {
        perror("Erro ao abrir fiheiro.\n");
        exit(EXIT_FAILURE);
    }

    fprintf(arquivo,"%s","Nos te amamos professor Yuri Sefrin");
    fclose(arquivo);
}