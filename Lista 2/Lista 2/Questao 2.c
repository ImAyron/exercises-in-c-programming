#include <stdio.h>
#include <stdlib.h>
int vet(int v[10]){
int x,z;

for(x=0;x<10;x++){
    if(v[x]>v[x+1]&& x+1<10){
        z=v[x];
    }

}
return z;
}
int main()
{int i,j,a[10];
for(i=0;i<10;i++){
    printf("Digite o vetor na posicao v[%d]:",i+1);
    scanf("%d",&a[i]);

}
j=vet(a);

printf("O maior valor sera:%d",j);



}
