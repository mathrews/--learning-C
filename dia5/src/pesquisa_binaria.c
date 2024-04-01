#include "header.h"
#include <math.h>
#include <stdio.h>
#include <strings.h>

int pesquisa_binaria(int *lista, int item) {
  double baixo = 0.0;
  size_t alto = sizeof(lista) - 1;

  while (baixo <= alto) {
    int meio = round((baixo + alto) / 2);
    int chute = lista[meio];

    if (chute == item) {
      return meio;
    }
    if (chute > item) {
      alto = meio - 1;
    } else {
      baixo = meio + 1;
    }
  }
  return 0;
}
