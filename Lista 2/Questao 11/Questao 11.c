
#include <stdio.h>
#include <stdlib.h>
int some(int mat[5][5]){
int i,j,tot=0;


for(i=0;i<5;i++){


    for(j=0;j<5;j++){



        tot=tot+mat[i][j];

    }


}

return tot;



}
int main()
{
  int a,b,c[5][5],t;


  for(a=0;a<5;a++){



    for(b=0;b<5;b++){

         printf("Digite o vetor na posicao v[%d][%d]:",a+1,b+1);

    scanf("%d",&c[a][b]);


    }



  }

   t=some(c);
   printf("A soma dos seus elemtentos sera %d",t);

}
