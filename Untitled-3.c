#include <stdio.h>

int main()
{
    float n1,n2,n3,media;
    
    printf("Digite o primeiro numero\n");
    scanf("%F",&n1);
    
    printf("Digite o segundo numero\n");
    scanf("%F",&n2);
    
    printf("Digite o terceiro numero\n");
    scanf("%F",&n3);
    
    media=((n1*0.2)+(n2*0.3)+(n3*0.5));
    printf("A media e %F",media);

    return 0;
}
