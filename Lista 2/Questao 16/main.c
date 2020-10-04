#include <stdio.h>
#include <stdlib.h>
int mar(int tam,int onda[tam],int z){
int i,j=-1;
for(i=0;i<tam;i++){

    if(onda>=0){

      j=i-1;

        return j;
    }
     else{
        return mar(tam,onda,z);


     }
   else {

    return -1;


   }
}


}
int main()
{
int a,b,d,z;

printf("Digite o tamanho do vetor:");

scanf("%d",&a);

int c[a];

for(b=0;b<a;b++){
    printf("Digita o vetor na posicao %d:",b+1);
    scanf("%d",&c[a]);

}
printf("Digite o caracter q vc queira saber se possui no vetor:");
scanf("%d",&z);
d=mar(a,c,z);
printf("posiçao dele %d",d);

}
