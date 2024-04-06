#include <stdio.h>

int main(void) {

  // Condicionais e if statements
  // if statement:
  int x = 20;
  int y = 18;
  if (x > y) {
    printf("20 is greater than 18\n\n");
  }

  // else statement:
  int time = 20;
  if (time < 18) {
    printf("Good day.\n\n");
  } else {
    printf("Good evening.\n\n");
  }

  // else if statement:
  int time2 = 22;
  if (time2 < 10) {
    printf("Good morning.\n\n");
  } else if (time2 < 20) {
    printf("Good day.\n\n");
  } else {
    printf("Good evening.\n\n");
  }

  // Ternary Operator:
  int time3 = 20;
  (time3 < 18) ? printf("Good day.\n\n") : printf("Good evening.\n\n");

  // Real Examples:
  int doorCode = 1337;
  if (doorCode == 1337) {
    printf("Correct code. \nTre door is now open.\n\n");
  } else {
    printf("Wrong code. \nTre door remains closed.\n\n");
  }

  int myNum = 10;
  if (myNum > 0) {
    printf("The value is a positive number\n\n");
  } else if (myNum < 0) {
    printf("The value is a negative number\n\n");
  } else {
    printf("The value is 0.\n\n");
  }

  int myNumEvenOrOdd = 5;
  if (myNumEvenOrOdd % 2 == 0) {
    printf("%d is even.\n\n", myNumEvenOrOdd);
  } else {
    printf("%d is odd.\n\n\n", myNumEvenOrOdd);
  }

  // Switch statement:
  int day = 5;
  switch (day) {
  case 1:
    printf("Monday\n\n\n");
    break;
  case 2:
    printf("Tuesday\n\n\n");
    break;
  case 3:
    printf("Wednesday\n\n\n");
    break;
  case 4:
    printf("Thursday\n\n\n");
    break;
  case 5:
    printf("Friday\n\n\n");
    break;
  case 6:
    printf("Saturday\n\n\n");
    break;
  case 7:
    printf("Sunday\n\n\n");
    break;
  default:
    printf("Looking forward to the Weekend \n\n\n");
  }

  // C while loop

  int i = 0;
  while (i < 5) {
    printf("%d\n", i);
    i++;
  }
  printf("\n");

  // do/while loop:
  int i2 = 0;
  do {
    printf("%d\n", i2);
    i2++;
  } 
  while (i2 < 5);
  printf("\n");

  // Real examples:
  int countdown = 3;
  while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
  }
  printf("Happy New Year!!\n\n");

  int dice = 1;
  while (dice <= 6) {
    if (dice < 6) {
      printf("No Yatzy\n");
    } else {
      printf("Yatzy!\n");
    }
    dice++;
  }
  printf("\n");

  return 0;
}
