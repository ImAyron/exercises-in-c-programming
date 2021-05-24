#include <stdio.h>
#include <stdlib.h>

int main()
{float x,y,media,prod,div;
   printf("Digite um numero inteiro entre 1 a 10:");
   scanf("%f",&x);
   printf("Digite outro numero inteiro entre 1 a 10:");
   scanf("%f",&y);

   if(x+y<8){
      media =(x+y)/2;
      printf("A media dos numeros sera:%f",media);
   }
   if(x+y==8){
    prod=x*y;
    printf("O produto deles sera:%f",prod);

   }
   if(x+y>8){
   if(x>y){
    div=x/y;
    printf("\n A divisao desses numeros sera:%f",div);
   }
   if(y>x){
    div=y/x;
    printf("\n A divisao desses numeros sera:%f",div);
   }}
   else {
    printf("A divisao desse numero e 1");
   }


   return 0;

}
