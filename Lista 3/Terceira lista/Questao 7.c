#include <stdio.h>
#include <stdlib.h>
typedef struct aluno{
char nome[50];
char curso[50];
int idade;


}alunos;
int main()
{alunos x;
printf("Digite o nome do aluno:");
gets(x.nome);
printf("Digita o curso:");
gets(x.curso);
printf("Digite a idade do aluno:");
scanf("%d",&x.idade);

    printf("O aluno %s cursa %s e possui %d anos:",x.nome,x.curso,x.idade);
}
