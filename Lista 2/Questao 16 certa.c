#include <stdio.h>
#include <stdlib.h> //. Escreva uma fun��o recursiva que procure um valor em um vetor e retorne o �ndice do elemento, caso ele exista no vetor, ou -1 caso, caso contr�rio.
int fib(int tam,int n[tam],int c){
if(tam<0){

    return -1;

}
else if(n[tam]==c){

    return tam;
}
else {

    fib(tam-1,n,c);
}
}
int main()
{
    int x,z,t,i;
    printf("Digite o tamanho:");
    scanf("%d",&x);
    int h[x];
    for(i=0;i<x;i++){
            printf("Digite o vetor na posi�ao v[%d]",i+1);
        scanf("%d",&h[i]);
    }

    printf("Digite um numero:");
    scanf("%d",&z);
    t=fib(x,h,z);
    printf("%d",t);






}
