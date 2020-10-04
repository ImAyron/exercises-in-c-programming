#include <stdio.h>
#include <stdlib.h>

int detetive(int vet[], int tam, int valor)
{
    if (tam==1)
    {
        if (valor==vet[0])
        {
            return (0);
        }
        else
        {
            return(-1);
        }
    }
    else
    {
        if (valor==vet[tam-1])
        {
            return (tam-1);
        }
        else
        {
            return(detetive(vet, tam-1, valor));
        }
    }

}
int main()
{
    int tam, i, c;
    printf("digite um valor para procurarmos");
    scanf("%d", &i);
    int veto[10]={1,2,3,4,5,6,7,8,9,10};
    c=detetive(veto, 10, i);
    if (c!= -1)
    printf("ele esta localizado no indice %d", c);
    else
        printf("ele nao pertence ao vetor");
    return 0;
}
