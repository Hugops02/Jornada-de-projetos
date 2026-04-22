#include <stdio.h>
#include <math.h>
#include <string.h>

void imprimirNumeros(int n)
{
  if (n == 0)
  {
    return;
  }
  else
  {
    printf("%d ", n);
    imprimirNumeros(n - 1);
  }
}

int main()
{

  int numero = 10;
  printf("Os primeiros números %d em ordem crescente são..: ", numero);

  // Chamar a função recursiva
  imprimirNumeros(numero);
  printf("\n");

  printf("Fim do Programa!\n");
  return 0;
}
