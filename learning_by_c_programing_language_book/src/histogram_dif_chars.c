#include "header.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_LETTERS 1000

int histogram_dif_chars() {
  int c;
  int letters[MAX_LETTERS];

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      continue;
    } else {
      letters[c] += 1;
    }
  }

  for (int i = 0; i < MAX_LETTERS; i++) {
    if (letters[i] != 0) {
      for (int i = 1; i <= letters[i]; i++) {
        printf("#");
      }
      printf("\n");
    }
  }

  return EXIT_SUCCESS;
}
