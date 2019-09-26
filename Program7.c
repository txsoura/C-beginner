#include <stdio.h>

int main()
{
    const float precoa=1.00, precov=1.30;
    short quantidade;
    
    printf("Digite a quantidade de macas\n");
    scanf("%hi",&quantidade);
    
    if(quantidade>=12){
        printf("O valor total e R$%f",quantidade*precoa);
    }else{
        printf("O valor total e R$%f",quantidade*precov);
    }

    return 0;
}
