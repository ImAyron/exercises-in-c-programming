#include <stdio.h>
#include <stdlib.h>

int main()
{ float kw,valor,icms,total;
    printf("Digite o valor de quilowatts comsumidos:");
    scanf("%f",&kw);
    valor = kw*0.12;
    icms=(valor/100)*18;
    total=valor+icms;
    printf("o valor total a se pagar e:%f",total);

    return 0;

}
