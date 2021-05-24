#include <stdio.h>
#include <stdlib.h>
float func(int b){
    int a;
    float now=0,y;
if(b>0){
for(a=1;a<=b;a++){
    y=1.0/a;
    now=now+y;}}
    return now;
}


int main()
{int h;
float p;
  printf("Digite um numero:");
  scanf("%d",&h);
  p=func(h);
  printf("O valor de s sera:%.2f",p);
  return 0;
}
