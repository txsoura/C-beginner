//Exercício 4.9

short pot(short x, short n)
{
    short p=x;
    for(short i=0;i<n;i++){
        p=p*x;
    }
    return p;
}