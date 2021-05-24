#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cod,x=0;
   float pre,media=0,newp,soma=0;
   printf("Digite o preco a alterar:");
   scanf("%f",&pre);
   printf("Digite o codigo do produto:");
   scanf("%d",&cod);

   while(cod>0){

    media=media+pre;
    newp=(pre/100*20)+pre;
    soma=newp+soma;
    printf("O novo preco do produto %d sera:%f",cod,newp);

    x++;
    printf("\n Digite outro codigo:");
    scanf("%d",&cod);
    printf("\n Digite outro preco:");
    scanf("%f",&pre);

   }
printf("A media dos precos sem alteracao sera:%f",media/x);
printf("\n A media dos precos com alteracao sera:%f",soma/x);
}
