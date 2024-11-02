#include "./header.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_WORDS 1000 // Defina um tamanho máximo para o array

void histogram_length() {
  int c, i, j;
  int lengths[MAX_WORDS]; // Definindo um array com tamanho fixo
  i = 0;
  j = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (j != 0) {
        lengths[i] = j;
        i++;
        j = 0; // Reseta o comprimento para a próxima palavra
      }
    } else {
      j++; // Conta o número de caracteres da palavra
    }
  }

  // Exibe o histograma
  for (int k = 0; k < i; k++) {
    for (int j = 1; j <= lengths[k]; j++) {
      printf("#");
    }
    printf("\n");
  }
}
