#include <stdio.h>
#include <stdlib.h>
void maiu(char destino[],char origem []){
int t;
for(t=0;destino[t]!='\0';t++){

    destino[t]=origem[t]-32;

}

}
int main()
{

char c[100],x[100];

printf("Digite uma palavra:");
gets(c);


maiu(x,c);

puts(x);
return 0;




}
