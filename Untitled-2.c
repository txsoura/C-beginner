#include <stdio.h>
#include <stdbool.h>

int main(){
    bool a, b;

    printf("Digite o 1o valor (0 ou 1)\n");
    scanf("%d",&a);

    printf("Digite o 2o valor (0 ou 1)\n");
    scanf("%d",&b);

    printf("a=%d",a," b=%d",b);
    printf("a && b",a&&b);
    printf("a || b",a||b);
    printf("a != b",a!=b);

    return 0;
}