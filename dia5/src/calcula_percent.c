#include "header.h"
#include <stdio.h>

int calcula_percent(double num, double percent) {
  double porcentagem = (num / 100) * percent;
  printf("%f de %f é %f", percent, num, porcentagem);
  return 0;
}
