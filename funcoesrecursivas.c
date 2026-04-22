#include <stdio.h>
#include <math.h>
#include <string.h>

int fibonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main()
{
  int termo;
  printf("Digite o termo de fibonacci desejado..:\n");
  scanf("%d", &termo);

  printf("O termo de fibonacci de %d é %d\n", termo, fibonacci(termo));

  printf("Fim do programa!\n");
  return 0;
}
