#include <stdio.h>
#include <stdlib.h>

int divisao(int dividendo,int divisor,int *resto){
int resultado;

*resto=dividendo%divisor;
resultado=(dividendo-*resto)/divisor;
return resultado;

}
int main()
{int x,a,c,total;
printf("Digite o dividendo:");
scanf("%d",&x);
printf("Digite o divisor:");
scanf("%d",&a);
total=divisao(x,a,&c);
printf("A o resultado da divisao sera:%d e o resto %d",total,c);
return 0;

}
