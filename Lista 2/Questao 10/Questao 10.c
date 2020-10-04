#include <stdio.h>
#include <stdlib.h>
void fumo(char car[],char pha[],char f){
int i;
for(i=0;pha[i]!=f;i++){

        car[i]=pha[i];

}
}

int main()
{
   char z[100],s[100],f;

   printf("Digite uma palavra:");
   gets(z);


   printf("Digite a letra em q ela parara de ser copiada:");
   scanf("%c",&f);


   fumo(s,z,f);


   puts(s);




}
