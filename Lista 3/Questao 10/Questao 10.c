#include <stdio.h>
#include <stdlib.h>
typedef struct fut{

char inicial;
int camisa;
float peso,altura;



}jogador;
int main()
{
   jogador x[11];
   int i,j,max;
   char min;
   for(i=0;i<11;i++){

    printf("Digite a letra inicial  do jogador %d:",i+1);
    scanf("%c",&x[i].inicial);
    printf("\n Digite o numero da camisa:");
    scanf("%d",&x[i].camisa);
    printf("Digite o peso:");
    scanf("%f",&x[i].peso);
    printf("Digita a altura:");
    scanf("%f",&x[i].altura);
fflush(stdin);
   }
min=x[i].altura;
max=x[i].peso;
for(j=0;j<11;j++){

       printf("O jogador com inicial %c, e camisa %d , possui peso igual a %f e altura igual a %f.",x[j].inicial,x[j].camisa,x[j].peso,x[j].altura);
        if(min>x[j].altura){
            min=x[j].inicial;
        }
        if(max<x[j].peso){
            max=x[j].peso;

        }

printf("O COM MENOR ALTURA É %c E O MAIOR PESO E %d ",min,max);
}}
