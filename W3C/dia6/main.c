#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // For Loop in C
  int i;
  for (i = 0; i < 5; ++i) {
    printf("%d\n", i);
  }
  printf("\n");

  // Nested Loops
  int i2, j;
  for (i2 = 1; i2 <= 2; ++i2) {
    printf("Outer: %d\n", i2);

    for (j = 1; j <= 3; ++j) {
      printf(" Inner: %d\n", j);
    }
  }
  printf("\n");

  // Real Life examples
  int i3;
  for (i3 = 0; i3 <= 100; i3 += 10) {
    printf("%d\n", i3);
  }
  printf("\n");

  for (i3 = 0; i3 <= 10; i3 = i3 + 2) {
    printf("%d\n", i);
  }
  printf("\n");

  int number = 2;
  int i4;

  for (i4 = 1; i4 <= 10; ++i4) {
    printf("%d x %d = %d\n", number, i4, number * i4);
  }
  printf("\n");

  // C Break and Continue
  int i5;
  for (i5 = 0; i5 < 10; ++i5) {
    if (i5 == 4) {
      break;
    }
    printf("%d\n", i5);
  }
  printf("\n");

  for (i5 = 0; i5 < 10; ++i5) {
    if (i5 == 4) {
      continue;
    }
    printf("%d\n", i5);
  }
  printf("\n");

  // Break and Continue in While Loop
  int i6 = 0;
  while (i6 < 10) {
    if (i6 == 4) {
      break;
    }
    printf("%d\n", i6);
    ++i6;
  }
  printf("\n");

  int i7 = 0;
  while (i7 < 10) {
    if (i7 == 4) {
      ++i7;
      continue;
    }
    printf("%d\n", i7);
    ++i7;
  }
  printf("\n");

  // Arrays in C
  int myNumbers[] = {25, 50, 75, 100};
  printf("%d\n\n", myNumbers[0]);

  // Changing values in Arrays
  myNumbers[0] = 33;
  printf("%d\n\n", myNumbers[0]);

  // Loop Through an Array
  int i8;
  for (i8 = 0; i8 < 4; ++i8) {
    printf("%d\n", myNumbers[i8]);
  }
  printf("\n");

  // Set Array Size
  int myArrayOfNumbers2[4];

  myArrayOfNumbers2[0] = 25;
  myArrayOfNumbers2[1] = 50;
  myArrayOfNumbers2[2] = 75;
  myArrayOfNumbers2[3] = 100;

  int i9;
  for (i9 = 0; i9 < sizeof(*myArrayOfNumbers2); ++i9) {
    printf("%d\n", myArrayOfNumbers2[i9]);
  }
  printf("\n");

  // Get Arrya Size or Length
  int myNumbers3[] = {10, 25, 50, 75, 100};
  printf("%lu\n\n", sizeof(myNumbers3));
  // Why 20, not 5? This happens because the sizeof
  // operator returns the size of a type in bytes.
  // And in this array, all numbers are ints, and
  // int is equal 4 bytes. 4 x 5 = 20 bytes;

  int length = sizeof(myNumbers3) / sizeof(myNumbers3[0]);
  printf("%d\n\n", length);

  int i10;

  for (i10 = 0; i10 < length; ++i10) {
    printf("%d\n", myNumbers3[i]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}
