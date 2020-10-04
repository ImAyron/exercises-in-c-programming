#include <stdio.h>
#include <stdlib.h>
void inv(char *string){
   if(*string){
	  inv(string+1);
	  putchar(*string);
   }
}

int main(){
   inv("pele");
   return 0;
}
