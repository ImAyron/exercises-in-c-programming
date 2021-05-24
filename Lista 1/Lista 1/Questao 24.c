#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,some;
printf("Digite um numero:");
scanf("%d",&some);
for(i=1;i<=some;i++){
    for(j=1;j<=some;j++){
        if(i==j){
            printf("-");
        }
        else{
            printf("*");
        }
    }
    printf("\n");
}

}
