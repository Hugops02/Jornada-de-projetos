#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

  // while 
  printf("Comando While\n");
  int contador = 1;
  while (contador <= 5)
  {
    printf("%d Hugo\n", contador);
    contador++;
  }

  // for
  printf("Comando For\n");
  for (int i = 1; i <= 5; i++)
  {
    printf("%d Hugo\n", i);
  }

  // Do While
  printf("Comando Do While\n");
  int cont = 1;
  do
  {
    printf("%d Hugo\n", cont);
    cont++;
  } while (cont <= 5);

  printf("Fim do programa!\n");
  return 0;
}
