#include <stdio.h>
#include <stdlib.h>

int main()
{

float salario,Extra,total,r,horas;
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    printf(" \n Digite Suas Horas extras:");
    scanf("%f",&horas);
    printf("\n Digite o valor das Horas extras:");
    scanf("%f",& Extra);
    total=((salario+(horas*Extra))/100)*8;
    r=salario+(horas*Extra)-total;
    printf("Seu salario liquido e :%f",r);
    printf("\n O desconto do inss ficara em reais:%f",total);

     return 0;

}
