#include <stdio.h>
#include <stdlib.h>
typedef struct kid{


float peso;
float altura;

}altura;
int main()
{
    altura joao,maria;float media_altura, media_peso;

    joao.altura=1.90;joao.peso=98;
    maria.altura=1.50;maria.peso=55;
    joao.altura=1.78;
    maria.peso=75;


    media_altura=(joao.altura+maria.altura)/2;
    media_peso=(joao.peso+maria.peso)/2;

    printf("A MEDIA DAS ALTURAS SERA:%f, A MEDIA DOS PESOS SERA:%f ",media_altura,media_peso);

}
