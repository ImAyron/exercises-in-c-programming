#include <stdio.h>
#include <stdlib.h>
int fun(int som){
   if(som==1){
    return 1;
   }
    else{
     return som+fun(som-1);
    }
}
int main()
{int num,k;

    printf("Digite um numero inteiro:");
    scanf("%d",&num);


    k=fun(num);

    printf("A Somatoria desse numero sera :%d",k);





}
