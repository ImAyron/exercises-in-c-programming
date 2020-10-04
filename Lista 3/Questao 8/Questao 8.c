#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
char nome[50];
char curso[50];
int idade;
float provas[3];


}alunos;
int main()
{alunos x;int i,k=0;
printf("Digite o nome do aluno:");
gets(x.nome);
printf("Digita o curso:");
gets(x.curso);
printf("Digite a idade do aluno:");
scanf("%d",&x.idade);
printf("Digite a nota das 3 provas:");
for(i=0;i<3;i++){

    scanf("%f",&x.provas[i]);


    k+=x.provas[i];


}


    printf("O aluno %s cursa %s e possui %d anos:",x.nome,x.curso,x.idade);
    if(k/3.0>=60){
        printf("\nA media do aluno foi:%f portanto aprovado",k/3.0);

    }
    else{

        printf("\nA media do aluno foi: %f portanto reprovado",k/3.0);
    }
}
