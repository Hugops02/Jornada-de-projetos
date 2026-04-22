#include <stdio.h>
#include <math.h>
#include <string.h>

void exemplo()
{

  printf("Teste de Procedimento!!!\n");
}
int soma(int a, int b)
{
  return a + b;
}

int main()
{

  exemplo();
  int resultado = soma(2, 2);
  printf("A soma é... %d \n", resultado);

  printf("Fim do programa\n");
  return 0;
}
