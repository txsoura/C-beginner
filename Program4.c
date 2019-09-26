#include <stdio.h>

int main()
{
    short nascimento,ano,idade;
    
    printf("Digite o ano atual\n");
    scanf("%hi",&ano);
    
    printf("Digite o seu ano de nascimento\n");
    scanf("%hi",&nascimento);
    
    idade=ano-nascimento;
    printf("A sua idade e %hi\n",idade);
    
    if(idade>=16){
        printf("Voce ja pode votar");
    }else{
        printf("Voce nao pode votar");
    }

    return 0;
}
