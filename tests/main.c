#include <stdio.h>

#define EXIT_SUCCESS 0

int main(void) {
  double num = 0.1 + 0.2;

  printf("%.200f\n", num);

  return EXIT_SUCCESS;
}
