/*
* CSI030-2019-01 - Programacao de Computadores I
* Nome........: Tulio Gomides De Souza
* Matricula...: 18.2.8101
* Curso.......: Engenharia de Computação
* Exercicio...: pagina 25 - exercicio 8 / atividade pratica Lista de Exercícios 002*/

/*Questão:
Escreva uma função recursiva que procure um valor em um vetor e retorne o índice
do elemento, caso ele exista no vetor, ou -1 caso, caso contrário.
*/
/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
 int vet(int tao,int pa, int vetor[tao]);

/* Funcao principal */
int main(int argc, char const *argv[]) {

  /* Declaração de variaveis */
  int tam,i,al;

  printf("\n Digite o tamanho do vetor: ");
  scanf("%d",&tam);

  int vt[tam];

for(i=0;i<tam;i++)
{
    printf("\n Digite o valor para o vetor [%d] de [%d]: ",i+1,tam);
    scanf("%d",&vt[i]);
}

 printf("\n Digite o valor que vai se procurar no vetor: ");
    scanf("%d",&al);
  printf("%d \n\n",vet(tam,al,vt));

  system("pause");
  return 0;

}

 int vet(int tao,int pa, int vetor[tao])
 {
     if(vetor<0)
     {
         return -1;
     }
     else if(vetor[tao]==pa)
     {
         return tao;
     }
     else
     {
     	 vet( tao-1, pa,  vetor);

     }
 }
