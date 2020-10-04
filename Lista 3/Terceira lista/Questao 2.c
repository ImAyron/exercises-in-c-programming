#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
float  max, min;
float *pont;
pont = (float *) malloc(5 * sizeof(float));

for(i=0;i<5;i++){
        printf("Digite o vetor na posicao %d:",i+1);
        scanf("%f",&pont[i]);
}

max=pont[0];
min=pont[0];

for(j=0;j<5;j++){

    if(max<pont[j]){

        max=pont[j];
    }

    if(min>pont[j]){

        min=pont[j];


    }


}

printf(" O maximo e minimo da sequencia sera:%f max,%f min ",max,min);

free(pont);


}
