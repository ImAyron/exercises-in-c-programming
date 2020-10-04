#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float volume (float raio){
float pi=3.14,v;
v=(4.0/3.0)*pi*pow(raio,3);
return v;

}
int main()
{
float x,total;
printf("Digite um raio:");
scanf("%f",&x);
total= volume(x);
printf("Seu Volume sera:%f",total);

return 0;

}
