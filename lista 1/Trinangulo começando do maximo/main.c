#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,tam,banc;
printf("Digite o tamanho da base:");
scanf("%d",&tam);
    for(i=1;i<=tam;i++){
for(banc=1;banc<=tam-i;banc++){
    printf(" ");
}
        for(j=1;j<=i;j++){
         printf("*");
            }

 printf("\n");

    }
}
