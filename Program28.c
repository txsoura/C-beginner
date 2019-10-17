//Exercício 4.14

bool cpf(short n, short d)
{
    short cpf = n, s;

    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }

    d = s % 10;

    return true;
}