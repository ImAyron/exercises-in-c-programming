#include <stdio.h>
#include <stdlib.h>
typedef struct pont{

int x;
int y;

}ponto;
int main()
{ ponto prime_ponto;ponto segundo_ponto;
  prime_ponto.x=1;
  segundo_ponto.x=15;
  prime_ponto.y=13;
  segundo_ponto.y=20;

  printf("A distancia entres os pontos sera x sera:%d e a distancia entre os pontos y sera:%d",segundo_ponto.x-prime_ponto.x,segundo_ponto.y-prime_ponto.y);

}
