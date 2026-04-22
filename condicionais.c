#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

  float nota1, nota2, media;

  printf("Digite sua nota....:");
  scanf("%f", &nota1);

  printf("Digite sua nota....:");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  // Desvio condicional simples
  if (media >= 70)
  {
    printf("Aprovado\n");
  }
  // Desvio condicional condicionado
  else if (media >= 40)
    printf("Exame\n");
  // Desvio condicional encadeado
  else
    printf("Reprovado\n");

  printf("A média foi de...: %2f \n", media);

  printf("Fim do programa");

  return 0;
}
