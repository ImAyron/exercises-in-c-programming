#include <stdio.h>
#include <stdlib.h>

int some(int mat[7][6]){
int i,j,tot=0,rd=0,k;


for(i=0;i<7;i++){


    for(j=0;j<6;j++){


    if(i==4 || j==2){

      tot=tot+mat[i][j];

    }



}





}

return tot;



}
int main()
{
  int a,b,c[7][6],t;


  for(a=0;a<7;a++){



    for(b=0;b<6;b++){

         printf("Digite o vetor na posicao v[%d][%d]:",a+1,b+1);

    scanf("%d",&c[a][b]);


    }

  }

   t=some(c);
   printf("A soma dos seus elemtentos sera %d",t);

}
