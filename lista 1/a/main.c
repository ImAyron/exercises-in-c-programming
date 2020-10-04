#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,tam;
   printf("Digite o tamanho da base");
   scanf("%d",&tam);
   for(i=1;i<=tam;i++){
        printf("\n");
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
   }
   printf("\n");
}
