y#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct veiculo_est
{
    char nome[50];
    char placa[9];
    char cor[15];
    char turno;
}veiculo;

void escrita(veiculo x[100])
{
    int n, i;

    printf("entre com 1 para sim ou 0 para nao\n");
    printf("deseja cadastrar um veiculo: ");
    scanf("%d", &n);

    for(i = 0; n != 0; i++)
    {
        getchar();

        printf("\nnome: ");
        gets(x[i].nome);
        printf("\nplaca: ");
        gets(x[i].placa);
        printf("\ncor do veiculo: ");
        gets(x[i].cor);
        printf("\nturno (m/t/n/i): ");
        scanf("%c", &x[i].turno);

        if(i == 100)
        {
            printf("\nnao eh possivel cadrastar mais veiculos");
        }

        printf("-------------------------------------------------------------------------------------------------------------");
        printf("\ndeseja cadastrar outro veiculo: ");
        scanf("%d", &n);
    }

    leitura(x, i);
}

void leitura(veiculo x[100], int i)
{
    for(int j = 0; j < i; j++)
    {
        printf("\n------------------------------------------------------------------------------------------------------");

        switch(x[j].turno)
        {
        case 'm':
                printf("\ncondutor %s do veiculo %s, de cor %s, no turno da manha\n", x[j].nome, x[j].placa, x[j].cor);
                break;
        case 't':
            printf("\ncondutor %s do veiculo %s, de cor %s, no turno da tarde.\n", x[j].nome, x[j].placa, x[j].cor);
            break;
        case'n':
            printf("\ncondutor %s do veiculo %s, de cor %s, no turno da noite.\n", x[j].nome, x[j].placa, x[j].cor);
            break;
        case'i':
            printf("\ncondutor %s do veiculo %s, de cor %s, durante todo o dia.\n", x[j].nome, x[j].placa, x[j].cor);
            break;
        }
    }
}

int main()
{
    veiculo x[100];

    escrita(x);

    return 0;
}
