#include <stdio.h>

int main(void) {
  printf("Hello world 3\n\n");

  // Numeric Types

  int myNum = 1000; // usado para armazenar o numero sem decimais
  printf("%d\n", myNum);

  // Float e double são mais usados para armazenar numeros com decimais
  // como 9.99 ou 3.14515

  float myFloat = 5.75;
  printf("%f\n", myFloat);

  double myDouble = 19.99;
  printf("%lf\n\n", myDouble);

  // A precisão (em relação as casas decimais depois da ,)
  // do numero double é maior que o numero float,
  // porém o número double é o duplamente pesado em relação
  // ao float.

  float f2 = 35e1;
  double d2 = 12e2;

  printf("%f\n", f2);
  printf("%lf\n\n", d2);

  // Setando a precisão decimal

  float f3 = 3.4;
  printf("%.0f\n", f3); // se tirar todos os digitos do numero decimal, ele
                        // arredonda o número
  printf("%.1f\n", f3);
  printf("%.2f\n", f3);
  printf("%.3f\n\n", f3);
  // o ponto e o número após da "%" e antes do "F" representam a quantidade de
  // números que irão aparecer depois da virgula no numero float ou double

  // Para achar o tamanho em bytes de um data type ou uma variável,utiliza-se o
  // operador "sizeof"

  int intSize;
  float floatSize;
  double doableSize;
  char charSize;

  // É usado o format specifer %lu ao invés do %d pois o compilador espera que o
  // operador sizeof retorne um 'long unsigned int'. Em alguns computadores, o
  // %d é usável, porém é mais seguro usar apenas o %lu.
  printf("%lu\n", sizeof(intSize));
  printf("%lu\n", sizeof(floatSize));
  printf("%lu\n", sizeof(doableSize));
  printf("%lu\n\n", sizeof(charSize));

  // Saber os tamanhos dos tipos de dados é importante, pois sabendo o tipo de
  // memória correto, isso irá salvar mais memória e dar mais performance ao
  // programa

  // Um exemplo real:

  int items = 50;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item;
  char currency = '$';

  printf("Number of items: %.1d\n", items);
  printf("Cost per item: %.2f%c\n", cost_per_item, currency);
  printf("Total cost = %.2f%c\n\n", total_cost, currency);

  // type conversion
  // Há dois tipos de conversão no C:
  // - implícita
  // - explicita

  // Conversão implícita: acontece quando eu declaro uma variável de um tipo e
  // atribuo um valor de outro tipo a ela:
  float f4 = 9;
  printf("%.1f\n", f4);

  int i4 = 9.0;
  printf("%d\n", i4);
  // nos dois casos acima ocorrem conversão implícita, porém isso pode ficar
  // fora de controle se haver muitas ocasiões em que ocorrem;

  // Conversão explícita: deve acondecer por exemplo: quando se dividir dois
  // inteiros e o valor tiver que ser float para ser mais preciso e exato.

  // Manual conversion: int to float
  float sum = (float)5 / 2;
  // a conversão manual é feita colocando o tipo entre parenteses antes do valor
  // da variável

  printf("%.1f\n", sum); // 2.500000
  
  // exemplo 2:
  int num1 = 5;
  int num2 = 2;
  float sum2 = (float) num1 / num2;

  printf("%.1f\n\n", sum2);

  // exemplo real:
  int maxScore = 500;
  int userScore = 420;
  float percentage = (float) userScore / maxScore * 100;

  printf("User's percentage is %.2f\n\n", percentage);
  
  return 0;
}
