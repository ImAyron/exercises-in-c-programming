#include <stdio.h>
#include <stdlib.h>
// Escreva um procedimento recursivo que imprima os n primeiros elementos da s�rie de Fibonacci. O n�mero n deve ser informado pelo usu�rio.
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

 printf("Digite a posi�ao :");
 scanf("%d",&i);
 taf(i);
 printf("%d",i);


}
