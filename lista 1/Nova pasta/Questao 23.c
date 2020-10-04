#include <stdio.h>
#include <stdlib.h>

int main()
{

int i,j,same;
printf("Digite o numero de linhas e colunas:");
scanf("%d",&same);
   for(i=1;i<=same;i++){
    for(j=1;j<=i;j++){
        printf(" %d",j);
    }
    printf("\n");
   }
}
