#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nota;
   printf("Digite sua nota:");
   scanf("%d",&nota);
   if(nota>=60&&nota<=100)
   {
       printf("Aprovado");
   }
    if(nota<60&&nota>=0)
    {
        printf("Reprovado");
    }
    if(nota>100||nota<0)
    {
        printf("Nota Invalida");

    }
    return 0;
}
