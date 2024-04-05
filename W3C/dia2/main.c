/*
 * Hoje estarei estudando mais sobre variáveis, como declarálas, data-types,
 * format specifiers, entre outras coisas.
 *
 * Os format specifiers que estão
 * presentes em C são: %d, %i, %u, %o, %x, %X, %f, %e, %E, %g, %G, %c, %s, %p,
 * %n, %a, %A, %hd, %hi, %hu, %ho, %hx, %hX, %ld, %li, %lu, %lo, %lx, %lX, %lld,
 * %lli, %llu, %llo, %llx, %llX, %Lf, %Le, %LE, %La, %Lg, %LG, %lc, %ls, %lp,
 * %ln, %hh, %hhd, %hhi, %hhu, %hho, %hhx, %hhX, %llf, %llu, %llX, %llO, %llu,
 * %hhc, %hhs, %hhu, %hhp, %hhn, %hhN.
 *
 * O type char é usado para armazenar apenas um único caractere.
 */

#include <stdio.h>

int main(void) {
  int myNum = 7;
  float myFloatNum = 5.99;
  char myLetter = 'D';

  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);

  // specifiers

  printf("My favorite number is: %d\n", myNum);

  // types in string

  int myNum2 = 10;
  char myLetter2 = 'F';
  printf("My number is %d and my letter is %c", myNum2, myLetter2);

  // assignment

  int myNumber = 15;

  int myOtherNum = 23;

  // Assign the value of myOtherNum (23) to myNum
  myNumber = myOtherNum;

  // myNum is now 23, instead of 15
  printf("%d\n", myNumber);

  // sums

  int x = 5;
  int y = 6;
  int sum = x + y;
  printf("%d\n", sum);

  // multiple variables with the same type

  int x2 = 5, y2 = 6, z = 50;
  printf("%d\n", x + y + z);
  // ou
  int x3, y3, z3;
  x3 = y3 = z3 = 50;
  printf("%d\n\n\n", x3 + y3 + z3);

  // identifiers
  // Good variable name
  int minutes_per_hour = 60;

  // OK, but not so easy to understand what m actually is
  int m = 60;

  // Real life example

  int student_id = 15;
  int student_age = 23;
  float student_fee = 75.25;
  char student_grade = 'B';

  printf("Student id: %d\n", student_id);
  printf("Student age: %d\n", student_age);
  printf("Student fee: %f\n", student_fee);
  printf("Student grade: %c\n\n\n", student_grade);

  // Other real life example

  int length = 4;
  int width = 6;
  int area;

  area = length * width;

  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Width is: %d\n\n\n", area);

  // Data Types:

  // Create variables
  int myNum3 = 5;           // Integer (whole number)
  float myFloatNum3 = 5.99; // Floating point number
  char myLetter3 = 'D';     // Character

  // Print variables
  printf("%d\n", myNum3);
  printf("%f\n", myFloatNum3);
  printf("%c\n", myLetter3);

  // Basicamente, a diferença entre float e double é a quantidade de digitos
  // decimais que cada um pode ter. O numero double é suficiente para armazenar
  // 15 digitos decimais. Já o Float pode armazenar de 6 a 7 numeros decimais. O
  // tipo float possui o tamanho de 4 bytes, já o numero double possui o tamanho
  // de 8 bytes, ou seja, float é mais leve que double;
  float numeroFloat = 1.0;
  double numeroDouble = 1.0;

  printf("Exemplo de numero float: %F. Um exemplo de numero double: %lf\n", 1.0,
         1.0);

  char myGrade =
      'A'; // no data type char, armazena-se a unica letra com aspas simples.

  printf("%c\n\n", myGrade);

  char a = 65, b = 66,
       c = 67; // como é mostrado aqui, pode-se usar também os valores ASCII
               // para imprimir caracteres específicos. Eles não são armazenados
               // por aspas simples pois são numeros que são valores reais da
               // codificação ASCII.
  printf("%c\n", a);
  printf("%c\n", b);
  printf("%c\n", c);

  // Para armazenar mais do que um caractere, há uma forma:
  char myText[] = "Hello";
  printf("%s\n\n", myText);
  return 0;
}
