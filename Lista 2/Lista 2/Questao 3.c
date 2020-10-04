#include <stdio.h>
#include <stdlib.h>
int vet(int v[10],int x){
int i;
for(i=0;i<10;i++){
    if(v[i]==x){
        return 1;
    }
    }
    return 0;
}

int main()
{
 int z,k,p[10]={1,2,3,4,5,6,7,8,9,10};

printf("Digite um numero:");
scanf("%d",&k);


z=vet(p,k);
printf("%d",z);



}
