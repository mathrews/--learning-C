#include <stdio.h>

int main (void) {
  printf("Hello world!\n");
  int myNum = 15;
  printf("A idade que eu tinha ano passado era %d\n", myNum);
  char myName[7];
  scanf("%6s", myName);
  printf("My name is %s\n", myName);
  char myLetter = 'A';
  printf("My last name is %c", myLetter);
  float myFloatNum = 5.99;
  printf("%f\n", myFloatNum);
  return 0;
}
