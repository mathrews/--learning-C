#include <stdio.h>

int main()
{

  // [Chapter 1]
  // Getting Started
  printf("Hello, world\n\n");
  // print in stages:
  printf("hello, ");
  printf("world");
  printf("\n\n");

  // notations strings:
  printf("Meu \n\t nome \n\t\t é \n\t\t\t \"ENEIAS\"\n caractere apagado com o \\b: blob\b (blob) \n\n");

  // Programa que usa a formula °C=(5/9)(°F-32) para mostrar a tabela de temperaturas Fahrenheit e os Celsius equivalentes:
  int max = 400;
  int begin = 1;
  int interval = 20;

  while (begin <= 400)
  {
    if (begin == 1)
    {
      printf("%d\t%.0f\n", begin, (begin - 32) / 1.8);
      begin += 19;
    }
    else
    {
      printf("%d\t%.0f\n", begin, (begin - 32) / 1.8);
      begin += interval;
    }
  }
  printf("\n");

  // Book solution: 
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
  printf("\n");

  return 0;
}
