//Exercício 4.10

short quad(n)
{
    short i = 0, impar = -1, soma = 0;

    do
    {
        impar = impar + 2;
        soma += impar;
        i++;
    } while (i < n);

    return soma;
}