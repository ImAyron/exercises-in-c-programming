#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,tam,ban;
    printf("Digite o valor da base:");
    scanf("%d",&tam);
    for(i=1;i<=tam;i++){

        for(ban=1;ban>=tam-i&&ban<tam;ban++){

            printf(" ");
        }
        for(j=1;j<=tam;j++){
            printf("*");
            tam-1;
        }
 printf("\n");
    }
}
