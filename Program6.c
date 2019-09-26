#include <stdio.h>

int main()
{
    short n1,n2=0;
    
    printf("Digite o primeiro numero\n");
    scanf("%hi",&n1);
    
    do{
        printf("Digite o segundo numero\n");
        scanf("%hi",&n2);
        
        if(n1==n2){
            printf("Numero invalido, nao pode ser igual ao primeiro\n");
        }
        
    }while(n1==n2);
    
    if(n1>=n2){
        printf("A ordem crescente e %hi, %hi",n1,n2);
    }else{
        printf("A ordem crescente e %hi, %hi",n2,n1);
    }

    return 0;
}
