#include <stdio.h>
#include <stdlib.h>
void estacao(int mes,int dia){
if(mes>9&&mes<12){
        printf("%d/%d e Primavera",dia,mes);}
    if(mes==12&&dia<21){
            printf("%d/%d e Primavera",dia,mes);
    }
if(mes==9&&dia>=23){
     printf("%d/%d e Primavera",dia,mes);
}
if(mes==12&&dia>=21){
     printf("%d/%d e verao",dia,mes);
}

if(mes>=1&&mes<3){
        printf("%d/%d e outono",dia,mes);
}
if(mes==3&&dia<21){
    printf("%d/%d e Verao",dia,mes);
}




if(mes==3&&dia>=21){
    printf("%d/%d e outono",dia,mes);
}
if(mes>3&&mes<6){
     printf("%d/%d e outono ",dia,mes);
}
if(mes==6&&dia<21 ){
     printf("%d/%d e outono",dia,mes);
}
if(mes==6&&dia>21){
     printf("%d/%d e inverno",dia,mes);
}

if(mes>6&&mes<9){
     printf("%d/%d e inverno",dia,mes);
}


if(mes==6&&dia==21){
     printf("%d/%d e inverno",dia,mes);
}

if(mes==9&&dia<23){
        printf("%d/%d e inverno",dia,mes);
}}
int main()
{int x,a,data;
printf("Digite um mes:");
scanf("%d",&x);
printf("Digite um dia:");
scanf("%d",&a);
estacao(x,a);

return 0;


}
