#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,horas,total;
    printf("Digite as horas trabalhadas:");
    scanf("%f",&horas);
    if(horas<40)
    {
      salario=horas*15;
      printf("Seu salario sera:%f",salario);
    }
    else{
        salario=horas*21+600;
        printf("Seu salario sera:%f",salario);
    }
    return 0;
}
