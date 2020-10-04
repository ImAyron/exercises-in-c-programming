#include <stdio.h>
#include <stdlib.h>
int brancos(char pha[])
{
    int i,x=0;
    for(i=0;pha[i]!='\0';i++){


        if(pha[i]==' '){

            x=x+1;

        }

    }

   return x;

}
int main()
{
    char c[100];
    int a,b;


    printf("Digite frases que possuem espaços entre elas:");
    gets(c);



    a=brancos(c);




    printf("Na frase %s possuem %d espacos em branco",c,a);                                                                                //KKKKKKKKKKKKKKKKKKKKKKKKKK
}
