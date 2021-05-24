Q#include <stdio.h>
#include <stdlib.h>

int main()
{   int x,y;
    printf("Digite um numero inteiro:");
    scanf("%d",&x);

    if (x%10==0)
    {
      y=x/2;
      printf("A metade desse numero e:%d",y);
    }
    else{
        printf("O numero digitado nao termina com 0");
    }
    return 0;
}

