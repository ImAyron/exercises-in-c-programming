#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct est_aluno
{
    char nome[30];
    float media;
    int faltas;
}aluno;

int main()
{
    int n, tam = 1, i;

    aluno *x;

    x = malloc(tam * sizeof(aluno));

    printf("digite 1 para sim e 0 para nao\n");
    printf("deseja incluir um aluno: ");
    scanf("%d", &n);

    for(i = 0; n != 0; i++)
    {
        getchar();

        printf("\nnome: ");
        gets(x[i].nome);
        printf("\nmedia: ");
        scanf("%f", &x[i].media);
        printf("\nfaltas: ");
        scanf("%d", &x[i].faltas);

        printf("------------------------------------------------------------------------------------------------");
        printf("\ndeseja incluir outro aluno: ");
        scanf("%d", &n);

        if(n != 0)
        {
            tam += 1;
            realloc(x, tam * sizeof(aluno));
        }
    }

    for(int j = 0; j < i; j++)
    {
        printf("\n\nnome: %s", x[j].nome);
        printf("\nmedia: %.2f", x[j].media);
        printf("\nfaltas: %d", x[j].faltas);
    }

    free(x);

    return 0;
}
