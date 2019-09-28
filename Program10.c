#include <stdio.h>

int main(){
    float l1,l2,l3;

    printf("Digite o lado 1");
    scanf("%f",&l1);

    printf("Digite o lado 2");
    scanf("%f",&l2);

    printf("Digite o lado 3");
    scanf("%f",&l3);

    if(l1==l2 && l1==l3){
        printf("Triangulo equilatero");
    }else if(l1==l2 || l1==l3 || l2==l3){
        printf("Triangulo isosceles");
    }else{
        printf("Triangulo escaleno");
    }

    return 0;
}