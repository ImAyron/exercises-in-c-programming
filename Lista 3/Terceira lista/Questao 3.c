#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,y=1,cont=0;
    int *p,*z;

    p=malloc(5*sizeof(int));

    for(i=0;y!=0;i++)
    {
        printf("Digite um numero inteiro:\n");
        scanf("%d",&p[i]);
        cont+=1;
        y=p[i];

    }

    z=malloc(cont*sizeof(int));

    for(i=0;i<cont-1;i++)
    {
        z[i]=p[i];
        printf("%d \t",z[i]);
    }

    free(p);
    free(z);
    return 0;
}
