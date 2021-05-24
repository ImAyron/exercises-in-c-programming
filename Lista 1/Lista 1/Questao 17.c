#include <stdio.h>
#include <stdlib.h>
int idade(int ano,int mes,int dia){
int x,y,z,soma;
x=ano*365;
y=mes*30;
z=dia;
soma=x+y+z;
return soma;
}
int main()
{int a,b,c,dias;
printf("Digite sua idade em anos:");
scanf("%d",&a);
printf("Meses:");
scanf("%d",&b);
printf("Dias:");
scanf("%d",&c);

dias=idade(a,b,c);

printf("Sua idade em dias sera:%d",dias);
return 0;

}
