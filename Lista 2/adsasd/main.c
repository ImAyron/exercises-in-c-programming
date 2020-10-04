#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,c;
    int v[10][3];
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){

            printf("Digite a nota da prova %d do aluno %d:",j+1,i+1);
            scanf("%d",&v[i][j]);
        }
         if(v[i][j]<v[i][j+1]){
            c=v[i][j];}
            else if(v[i][j]>v[i][j+2]){
                c=v[i][j+2];
            }
            else{
                c=v[i][j+1];
            }
   printf("A menor nota do aluno %d sera :%d",i+1,c);
        printf("\n"); }
}

