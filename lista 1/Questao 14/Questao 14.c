#include <stdio.h>
#include <stdlib.h>

int main()
{float x,y=0,media=0;
printf("Digite quantos numeros inteiros positivos quiser:");
scanf("%f",&x);

while(x>0){
y=y+x;
media++;
scanf("%f",&x);
}
printf("A media sera %d:",y/media);
return 0;


}
