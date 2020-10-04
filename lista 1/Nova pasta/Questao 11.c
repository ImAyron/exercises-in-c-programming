#include <stdio.h>
#include <stdlib.h>

int main()
{
  int notas;
  printf("Digite sua nota:");
  scanf("%d",&notas);

  switch(notas){

  case 10:
    printf("Sua nota e A");
    break;
  case 9:
    printf("Sua nota e A");
    break;
  case 8:
    printf("Sua nota e B");
    break;
      case 7:
    printf("Sua nota e B");
    break;
  case 6:
    printf("Sua nota e C");
    break;
     case 5:
    printf("Sua nota e C");
    break;
  case 4:
    printf("Sua nota e D");
    break;
     case 3:
    printf("Sua nota e D");
    break;
     case 2:
    printf("Sua nota e D");
    break;
     case 1:
    printf("Sua nota e D");
    break;
     case 0:
    printf("Sua nota e D");
    break;
    default:printf("Valor invalido");


  }
  return 0;

}
