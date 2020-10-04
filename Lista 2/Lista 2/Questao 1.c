#include <stdio.h>
#include <stdlib.h>
int vet(int v[10]){
int i,k=0;
for(i=0;i<10;i++){
    if(v[i]<0){

       k++;
    }
}

  return k;

}
int main()
{
int a,x,z[10];

for(a=0;a<10;a++){

    printf("Digite o vetor na posicao v[%d]:",a+1);

    scanf("%d",&z[a]);
}
x=vet(z);

printf("Possuem %d numeros impares ",x);

}
