#include <stdio.h>
#include <stdlib.h>
int menor(int v[6][6]){
int i,j,k,l;

for(i=0;i<6;i++){

for(j=0;j<6;j++){

    if(i==j){

       if(v[i-1][j-1]>v[i][j]){

        k=v[i][j];
       }
    }
}
}
return k;

}
int main()
{
  int a[6][6],b,c,f;

  for(b=0;b<6;b++){

  for(c=0;c<6;c++){
    printf("Digite o vetor na posicao v[%d][%d]:",b+1,c+1);
    scanf("%d",&a[b][c]);

  }


  }
  f=menor(a);

  printf("O menor numero da diagonal principal sera:%d",f);

}
