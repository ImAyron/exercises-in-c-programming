#include <stdio.h>
#include <stdlib.h>

int main()
{
int vet[10],i,j;
for(j=0;j<10;j++){
    printf("Digite o valor na posicao %d:",j+1);
    scanf("%d",&vet[j]);

}
for(i=0;i<10;i++){
    int *ponteiro=&vet[i];
printf("o numero armazenado e %i: na memoria %i\n",*ponteiro,ponteiro);}



}
