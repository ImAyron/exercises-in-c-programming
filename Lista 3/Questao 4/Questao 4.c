#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,par=0,impar=0,tam;

  int *pont;
  printf("Digite o tamanho do vetor: ");
  scanf("%d",&tam);
  pont=malloc(tam*sizeof(int));
  for(i=0;i<tam;i++){


    printf("posicao %d:",i+1);
    scanf("%d",&pont[i]);

    if(pont[i]%2==0){

        par+=1;
    }
    else{
        impar+=1;

    }
  }

  printf("Sao %d pares,%d impares",par,impar);

}
