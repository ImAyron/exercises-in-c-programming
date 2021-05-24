#include <stdio.h>
#include <stdlib.h>

int main()
{float p1,faltas,p2,trab,total;
printf("Digite a nota da primeira prova:");
scanf("%f",&p1);
printf("Digite a nota da segunda prova:");
scanf("%f",&p2);
printf("Digite a nota do trabalho:");
scanf("%f",&trab);
printf("Digite o total de faltas:");
scanf("%f",&faltas);

p1=p1*3;
p2=p2*5;
trab=trab*2;

total=(p1+p2+trab)/10;

if(total>=6&&faltas<15){
    printf("Aprovado com :%f",total);
}
else{
    printf("Tera que fazer a prova final");
}
return 0;
}
