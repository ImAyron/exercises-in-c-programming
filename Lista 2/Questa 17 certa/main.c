#include <stdio.h>
#include <stdlib.h>
void q(int tam,char v[tam]){
 if(tam>=0){
    printf("%c",v[tam]);
  q(tam-1,v);
}

}
int main()
{
 int j;
 printf("Digite o tamanho de uma string:");
 scanf("%d",&j);
 char k[j];
 printf("Digite uma string:");
 scanf("%s",&k);
 q(j,k);

}
