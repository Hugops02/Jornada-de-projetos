#include <math.h>
#include <string.h>
#include <stdio.h>

int main()
{
  int watts[20];
  for (int i = 0; i < 20; i++)
  {
    printf("Escreva os valores fornecidos pela máquina ");
    scanf("%d", &watts[i]);
  } 

  int pmax = watts[0];
  for (int i = 0; i < 20; i++)
  {
    if (watts[i] > pmax)
    {
      pmax = watts[i];
    }
  }
  printf("A maior potência da máquina foi: %d ", pmax);
  
  int pmin = watts[0];
  for (int i = 0; i < 20; i++)
  {
    if (watts[i] < pmin)
    {
      pmin = watts[i];
    }
  }
  printf("A menor potência da máquina foi: %d ", pmin);

  return 0;
}
