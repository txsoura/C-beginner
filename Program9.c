#include <stdio.h>

int main(){
    short n1,n2;

    printf("Digite o primeiro numero\n");
    scanf("%hi",&n1);

    printf("Digite o segundo numero\n");
    scanf("%hi",&n2);

    if(n1==n2){
        printf("Os numeros sao iguais");
    }else if(n1>n2){
        printf("O primeiro numero e o maior");
    }else{
        printf("O segundo numero e o maior");
    }

    return 0;
}