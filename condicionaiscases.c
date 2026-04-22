#include <string.h>
#include <math.h>
#include <stdio.h>

int main()
{

  int dia;

  printf("Escreva um número para o dia da semana\n");
  scanf("%d", &dia);
  switch (dia)
  {

  case 1:
    printf("Domingo\n");
    break;

  case 2:
    printf("Segunda-feira\n");
    break;

  case 3:
    printf("Terça-feira\n");
    break;

  case 4:
    printf("Quarta-feira\n");
    break;

  case 5:
    printf("Quinta-feira\n");
    break;
  case 6:
    printf("Sexta-feira\n");
    break;
  case 7:
    printf("Sábado\n");
    break;
  default:
    printf("Opção inválida");
  }
  printf("Fim do programa\n");
  return 0;
}
