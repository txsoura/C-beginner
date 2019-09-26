#include <stdio.h>

int main()
{
    short n1,n2;
    
    printf("Digite o primeiro numero\n");
    scanf("%hi",&n1);
    
    printf("Digite o segundo numero\n");
    scanf("%hi",&n2);
    
    if(n1>=n2){
        printf("O maior e %hi",n1);
    }else{
        printf("O maior e %hi",n2);
    }

    return 0;
}
