#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1,n2;
printf("Digite um valor para n1:");
scanf("%d",&n1);
printf("\n Digite outro valor para n2:");
scanf("%d",&n2);
if(n1>n2){

while(n1 != n2){

   printf(" %d,",n2);
    n2++;}
    printf("%d",n1);
}

if(n1<n2){
    while(n1!= n2){

   printf("%d,",n1);
   n1++;
   }printf("%d",n2);
}

return 0;
}
