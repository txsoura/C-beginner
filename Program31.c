#include <stdio.h>
#include <conio.h>

void main()
{
    char *p, v = 'A';
    p = v;
    //mostra o valor da memoria
    printf("%s", &v);
    //mostra o valor d v no ponteiro p
    printf("%c", p);
    getch();
}
