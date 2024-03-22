#include <stdio.h>
#include "src/header.h"

int main(void)
{
  int arrayFiveNumbers[5] = {1, 2, 4, 5, 7};
  printf("O item correto é: %i", pesquisa_binaria(arrayFiveNumbers, 5));
}
