#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,v[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}},k=0,t=0,p=0,s=0;


    for(i=0;i<5;i++){

        for(j=0;j<5;j++){

          if(i==3){

            k=k+v[3][j];

          }
           if(j==1){


            t=t+v[i][1];

           }
           if(i==j){
            p=p+v[i][j];

           }
           if(i+j==6){

            s=s+v[i][j];

           }
        }


    }

   printf("O valor da soma da quarta linha sera:%d,\n da coluna %d,\n da diagonal principal %d,\n da diagonal secundaria %d",k+5,t,p,s+3) ;
}
