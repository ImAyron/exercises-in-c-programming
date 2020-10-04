#include <stdio.h>
#include <stdlib.h>

void inverte (char str[], int tam)
{
    int c=tam;
    if (tam==0)
    {
        printf("%c", str[0]);
    }
    else
    {
        printf("%c", str[tam]);
        inverte (str, tam-1);
    }
}
int main()
{
    char stri[50];
    int tama;
    gets(stri);
    tama=strlen(stri);
    inverte(stri, tama);

    return 0;
}
