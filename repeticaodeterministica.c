#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  int tabuada = 0;
  int resultado = 0;

  printf("Tabuada de qual número?...");
  scanf("%d", &tabuada);

  int cont = 1;
  while (cont <= 10)
  {
    resultado = tabuada * cont;

    printf("%d X %d = %d\n", tabuada, cont, resultado);
    cont++;
  }

  printf("Fim do programa");
  return 0;
}
