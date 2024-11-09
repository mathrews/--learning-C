#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LETTERS 1000

// Possiveis formas de inicializar o array: Utilizando FOR para zerar todos os
// buckets, ou utilizando o memset

int histogram_dif_chars() {
  int c, nl;
  int letters[MAX_LETTERS];

  // for (int i = 0; i < MAX_LETTERS; i++) {
  //   letters[i] = 0;
  // }

  memset(letters, 0, sizeof(letters));

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      ++nl;
    } else {
      ++letters[c];
    }
  }

  for (int i = 0; i < MAX_LETTERS; i++) {
    if (letters[i] != 0) {
      for (int k = 1; k <= letters[i]; k++) {
        printf("#");
      }
      printf("\n");
    } else {
      continue;
    }
  }

  return EXIT_SUCCESS;
}
