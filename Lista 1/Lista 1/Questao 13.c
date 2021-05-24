#include <stdio.h>
#include <stdlib.h>

int main()
{
float anos,ze,chi;
ze=1.30;
chi=1.50;
anos=0;
while(ze<chi){
 ze=ze+0.03 ;
 chi=chi+0.02;
 anos++;

}
printf("Demorara %f anos para que ze fique maior que chico",anos);
return 0;

}
