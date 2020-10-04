#include <stdio.h>
#include <stdlib.h>
int pos(int tam ,int v[tam]){
    int i,x=0,t;

    for(i=0;i<tam;i++){
            t=v[i];
        if(t<0){
            x++;
            v[i]=0;

        }
    }
return x;

}
int main()
{

    int b,y,a,k;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&b);
    int z[b];

   for(a=0;a<b;a++){

    printf("Digite o vetor na posicao v[%d]:",a+1);

    scanf("%d",&z[a]);}


   k=pos(b,z);



   printf("O valor de numeros que foram trocados foi:%d",k);
}
