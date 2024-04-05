/* Hoje estarei estudando a partir de constantes até onde eu conseguir ir */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  // constantes são variáveis feitas apenas para serem lidas:
  const int minutesPerHour = 60;
  const float PI = 3.14;

  // é considerado uma boa prática declarar nomes de constanes em upercase.
  // exemplos:
  const char MEU_ANIVERSARIO[] = "09/11/2007";
  const double PHI = 1.618;

  // OPERADORES:

  int sum1 = 100 + 50; // 150
  printf("%d\n", sum1);

  int sum2 = sum1 + 250;  // 400 (150 + 250)
  int sum3 = sum2 + sum2; // 800 (400 + 400)
  printf("%d\n\n", sum3);

  int sub1 = 10 - 5;
  int mult1 = 5 * 5;
  // ...

  // Assignment operators:

  int x = 10;
  x += 5;
  //...

  // Comparison Operators:

  printf("%d\n", 5 > 2);
  //...

  // Operadores lógicos:
  if (5 > 1 && 5 < 6) {
    printf("True\n\n");
  } else {
    printf("False\n\n");
  }

  if (5 > 1 || 5 < 6) {
    printf("True\n\n");
  } else {
    printf("False\n\n");
  }

  int trueVar = 1;
  int falseVar = 0;

  if (!trueVar) {
    printf("True\n\n");
  } else {
    printf("False\n\n\n");
  }

  // booleans
  // Em C, temos um tipo bool, porem ele não é um
  // tipo built-in como o int ou o char. Nele
  // precisamos importar seu header: <stdbool.h>
  bool isProgrammingFun = true;
  bool isFishTasty = true;
  const bool DEUS_E_BOM = true;
  const bool CAO_E_CORNO = true;
  
  printf("%d\n", isProgrammingFun == isFishTasty);
  // Os valores booleanos antes de printar eles, deve-se saber que eles são
  // retornados como inteiros. Sendo o "true" o número 1, e o "false" o número
  // 0.

  if (DEUS_E_BOM && CAO_E_CORNO) {
    printf("'Deus é bom e o cão é corno!'\n\t-Warley.\n");
  } else {
    printf("herege\n\n");
  }

  printf("%d\n", 10 == 10);
  printf("%d\n", 10 == 15);
  printf("%d\n", 5 == 55);

  return 0;
}
