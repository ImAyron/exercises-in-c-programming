#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam,x,y,k=0,v,t,xis;
    char palavra[50];

    printf("Digite A palavra criptografar:");
    gets(palavra);
    tam=strlen(palavra);
    if(tam%2==0){
        for(k=0;k<tam;k=k+2){
            x=palavra[k]+palavra[k+1];    //palavra[k]=x palavra[k+1]=y
            y=palavra[k]*2;
            xis=x;
            palavra[k+1]=y;
            palavra[k]=x;
            printf("%c%c",palavra[k],palavra[k+1]);
            palavra[k]=y/2;
            palavra[k+1]=xis-palavra[k];
        }
    }else{
        tam+=1;
        palavra[tam]=' ';
        for(k=0;k<tam;k=k+2){
            x=palavra[k]+palavra[k+1];    //palavra[k]=x palavra[k+1]=y
            y=palavra[k]*2;
            xis=x;
            palavra[k+1]=y;
            palavra[k]=x;
            printf("%c%c",palavra[k],palavra[k+1]);
            palavra[k]=y/2;
            palavra[k+1]=xis-palavra[k];
        }
    }

    printf("\n A palavra Descriptografada sera:%s",palavra);

    return 0;
}
