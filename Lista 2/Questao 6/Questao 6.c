#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int pha(char str[],char c){
int i,v=0;
     for(i=0;i<100;i++){

        if(str[i]==c){


          v++;

        }

     }
return v;
}


int main()
{
int z;
char k[100],c;

printf("Digite a palavra:");
gets(k);
printf("Digite a letra:");
scanf("%c",&c);


z=pha(k,c);

printf("A palavra %s possuem %d  %c ",k,z,c);

    return 0;
}
