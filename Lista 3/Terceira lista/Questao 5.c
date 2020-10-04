#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6],ca[6],i,j=0,v,t,w,l;

    int *pont;


    printf("Digite primeiro os numeros sorteados e posteriormente oq vc jogou\n");
    for(i=0;i<6;i++){

       printf("%d numero sorteado :",i+1);
       scanf("%d",&vet[i]);

       printf("%d numero que voçe jogou:",i+1);
       scanf("%d",&ca[i]);
    }
for(w=0;w<6;w++){
        for(l=0;l<6;l++){
    if(vet[w]==ca[l]){


        j+=1;}


}}


    pont=malloc(j*sizeof(int));
    printf("OS NUMEROS SORTEADOS FORAM");
    printf("\n");
    for(t=0;t<6;t++){

        printf("%d-",&vet[t]);

    }
    printf("\n");
    printf("OS NUMEROS QUE VOCE ACERTOU");
    printf("\n");
    for(v=0;v<j;v++){


        printf("%d-",pont[v]);

    }

free(pont);
}
