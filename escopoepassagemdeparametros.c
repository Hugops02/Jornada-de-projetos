#include <stdio.h>
#include <string.h>
#include <math.h>

float calcularSalarioBruto(float valorHora, float horasTrabalhadas)
{
  return valorHora * horasTrabalhadas;
}

float calcularDescontoInss(float result, float percentualInss)
{
  return result * (percentualInss / 100);
}

int main()
{
  float valorHora, horasTrabalhadas;

  printf("Informe o valor da hora..:");
  scanf("%f", &valorHora);

  printf("Informe a quantidade de horas trabalhadas..:");
  scanf("%f", &horasTrabalhadas);

  float result = calcularSalarioBruto(valorHora, horasTrabalhadas);
  printf("Salário Bruto..: R$ %.2f \n", result);

  // Desconto Inss
  float percentualInss = 9;
  float descontoInss = calcularDescontoInss(result, percentualInss);
  float salarioLiquido = result - descontoInss;

  printf("O desconto do Inss do seu salário é de..: R$ %.2f \n", descontoInss);

  printf("O seu valor do Salário Líquido é de..: R$ %.2f \n", salarioLiquido);

  printf("Fim do programa!\n");

  return 0;
}