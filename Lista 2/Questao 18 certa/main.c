#include <stdio.h>
#include <stdlib.h>
// Escreva um procedimento recursivo que imprima os n primeiros elementos da série de Fibonacci. O número n deve ser informado pelo usuário.
void taf(int x){

if(x==1||x==2){

    x=1;

}
else {


taf(x-1)+taf(x-2);

}

}


int main()
{
 int i;

 printf("Digite a posiçao :");
 scanf("%d",&i);
 taf(i);
 printf("%d",i);


}
