#include <stdio.h>
#include <stdlib.h>

int inverter ( int n)
{
    if (n<10)
    {
      return(n);
    }
    else
    {
        int a=n/10, b=n%10, cont=1;
        while (a>0)
        {
            a=a/10;
            cont*=10;
        }
        return(b*cont+inverter(n/10));
    }
}
int main()
{
    int num, c;
    printf("digite um numero");
    scanf("%d", &num);
    c=inverter(num);
    printf("%d", c);
    return 0;
}
