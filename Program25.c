//Exercício 4.5

void retangulo(short m, short n)
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