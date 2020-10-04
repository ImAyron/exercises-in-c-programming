#include <stdio.h>
#include <stdlib.h>
int pos(char vet[],char c){
int i,v=-1;
for(i=0;vet[i]!='\0';i++){

        if(vet[i]==c){

           v=i+1;
        }

}

return v;

}
int main()
{
char a,c[100];
int d;

printf("Digite uma string:");
gets(c);

printf("Digite uma letra:");
scanf("%c",&a);

d=pos(c,a);


printf("A palavra %s tem a letra %c na posicao %d",c,a,d);




}
