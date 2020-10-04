#include <stdio.h>
#include <stdlib.h>

int somatorio(int n)
{
    if (n==1)
    {
        return(1);
    }
    else
    {
        return(n+somatorio(n-1));
    }
}
int main()
{
    int num, c;
    printf("digite um numero");
    scanf("%d", &num);
    c=somatorio(num);
    printf("o somatorio e: %d", c);
    return 0;
}
