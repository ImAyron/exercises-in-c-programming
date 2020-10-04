#include <stdio.h>
#include <stdlib.h>
int media(int v[10]){
    int i,soma=0;
    float total;
for(i=0;i<10;i++){

    soma=v[i]+soma;

}

total=(float)soma/10.0;


return total;
}
int main()
{int a,z[10];
float k;
    for(a=0;a<10;a++){

    printf("Digite o vetor na posicao v[%d]:",a+1);

    scanf("%d",&z[a]);}


 k=media(z);
 printf("A media sera:%f",k);



}
