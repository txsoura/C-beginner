#include <stdio.h>

int main(){
    short n1,n2,n3;

    printf("Digite o primeiro numero\n");
    scanf("%hi",&n1);

    do{
        printf("Digite o segundo numero\n");
        scanf("%hi",&n2);

        if(n1==n2){
            printf("Numero invalido. Nao pode ser igual ao primeiro\n");
        }  
    }while(n1==n2);

    do{
        printf("Digite o terceiro numero\n");
        scanf("%hi",&n3);

        if(n3==n2 || n3==n1){
            printf("Numero invalido. Nao pode ser igual ao primeiro ou segundo\n");
        }  
    }while(n3==n2 || n3==n1);

    if(n1>n2 && n1>n3){
        printf("O maior numero e %hi",n1);
    }else if(n2>n1 && n2>n3){
        printf("O maior numero e %hi",n2);
    }else{
        printf("O maior numero e %hi",n3);
    }

    return 0;
}