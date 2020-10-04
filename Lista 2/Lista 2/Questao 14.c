#include <stdio.h>
#include <stdlib.h>

int diagonalprincipal(int tam, int mtz[tam][tam])
{
    int i,j,somapri=0;

        for(i = 0 ; i < tam ; i++)
            {
                for(j = 0 ; j < tam ; j++)
                    {
                        if(i==j)
                            {
                                somapri+=mtz[i][j];
                            }
                    }
            }

    return (somapri);
}

int diagonalsecundaria(int tam, int matriz[tam][tam])
{
    int i, j, somasec=0;

        for(i = 0; i < tam; i++)
            {
                somasec += matriz[i][tam-i-1];
            }

    return (somasec);
}

int linha(int tam, int matriz[tam][tam], int somadiag)
{
    int i, j = 0, somalin;

        while (j < tam)
            {
                somalin = 0;
                    for(i = 0; i < tam; i++)
                        {
                            somalin += matriz[i][j];
                        }

                    if(somalin == somadiag)
                        {
                            j++;
                        }
                    else
                        {
                            return (-1);
                        }
            }
    return (1);
}

int coluna(int tam, int matriz[tam][tam], int somadiag)
{
    int i = 0, j, somacol;

        while (i < tam)
            {
                somacol = 0;

                    for(j = 0; j < tam; j++)
                        {
                            somacol += matriz[i][j];
                        }

                    if(somacol == somadiag)
                        {
                            i++;
                        }

                    else
                        {
                            return (-1);
                        }
            }
    return (1);
}

int main()
{
    int i, j,dim,somadiag;

        printf("Digite a dimensao da matriz quadrada: ");
        scanf("%d", &dim);

    int matriz[dim][dim];

        for(i = 0; i < dim; i++)
            {
                for(j = 0; j < dim; j++)
                    {
                        printf("Digite os elementos da matriz: [%d] [%d]: ",i+1,j+1);
                        scanf("%d", &matriz[i][j]);
                    }
            }

        somadiag = diagonalprincipal(dim, matriz);

        if(somadiag == diagonalsecundaria(dim, matriz))
            {
                if(linha(dim, matriz, somadiag) == 1)
                    {
                        if(coluna(dim, matriz, somadiag) == 1)
                        {
                            printf("Eh magico\n");
                        }
                            else
                            {
                                printf("Nao eh magico\n");
                            }
                    }
                else
                    {
                        printf("Nao eh magico\n");
                    }
            }

        else
            {
                printf("Nao eh magico\n");
            }

        system("pause");

    return 0;
}

