#include "./src/header.h"
#include <stdio.h>
#include <string.h>

int main() {

  // [Chapter 1]
  // Getting Started
  // printf("Hello, world\n\n");
  // print in stages:
  // printf("hello, ");
  // printf("world");
  // printf("\n\n");

  // // notations strings:
  // printf("Meu \n\t nome \n\t\t é \n\t\t\t \"ENEIAS\"\n caractere apagado com
  // o \\b: blob\b (blob) \n\n");

  // // Programa que usa a formula °C=(5/9)(°F-32) para mostrar a tabela de
  // temperaturas Fahrenheit e os Celsius equivalentes: int max = 400; int begin
  // = 1; int interval = 20;

  // while (begin <= 400)
  // {
  //   if (begin == 1)
  //   {
  //     printf("%d\t%.0f\n", begin, (begin - 32) / 1.8);
  //     begin += 19;
  //   }
  //   else
  //   {
  //     printf("%d\t%.0f\n", begin, (begin - 32) / 1.8);
  //     begin += interval;
  //   }
  // }
  // printf("\n");

  // // Book solution:
  // float fahr, celsius;
  // float lower, upper, step;

  // lower = 0.0;
  // upper = 300.0;
  // step = 20.0;

  // fahr = lower;
  // print_line(20, "mid", "Table of Temps");
  // while (fahr <= upper)
  // {
  //   // in C, the division of ints resulting in a type float make happen a
  //   truncate of the value:
  //   // all fractional parts will be removed.
  //   celsius = 5.0 * (fahr - 32.0) / 9.0;
  //   printf("F:%.2f \t C:%.2f\n", fahr, celsius);
  //   fahr = fahr + step;
  // }
  // print_line(20, "mid", "");
  // printf("\n");

  // char str[100] = "Isto \\é \tum teste \tcom \b\tespaços duplos.";

  // make_splicit_invisible_chars(str);

  // wc();
  // word_per_ln();

  // occurrency_counterdif_chars

  // histogram_length();

  // histogram_dif_chars();

  longest_line();

  return 0;
}

int degree_calc() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0.0;
  upper = 300.0;
  step = 20.0;

  fahr = lower;
  print_line(20, "mid", "Table of Temps");
  while (fahr <= upper) {
    celsius = 5.0 * (fahr - 32.0) / 9.0;
    printf("F:%.2f \t C:%.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
  print_line(20, "mid", "");
  // printf("\n");
}

int power_exercise() {
  int i;

  for (i = 0; i < 10; ++i) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }

  return 0;
}

void make_splicit_invisible_chars(char *str) {
  // Buffer auxiliar que deve ser grande o suficiente para a string expandida
  char buffer[200];
  int i = 0, j = 0;

  while (str[i] != '\0') {
    // Verifica se o caractere é uma tabulação
    if (str[i] == '\t') {
      buffer[j++] = '\\';
      buffer[j++] = 't';
    }
    // Verifica se o caractere é um backspace
    else if (str[i] == '\b') {
      buffer[j++] = '\\';
      buffer[j++] = 'b';
    }
    // Verifica se é uma barra invertida
    else if (str[i] == '\\') {
      buffer[j++] = '\\';
      buffer[j++] = '\\';
    }
    // Caso contrário, apenas copia o caractere
    else {
      buffer[j++] = str[i];
    }
    i++;
  }

  // Adiciona o terminador nulo ao final da nova string
  buffer[j] = '\0';

  // Copia o conteúdo do buffer de volta para a string original
  strcpy(str, buffer);

  printf("%s\n", str);
}

void split_whitspace(char *str) {
  int i = 0, j = 0;
  int len = strlen(str);

  while (i < len) {
    // Copia o caractere atual se não for um espaço
    if (str[i] != ' ') {
      str[j++] = str[i++];
    }
    // Se for espaço, copia apenas o primeiro e ignora os seguintes
    else {
      str[j++] = str[i++];
      // Ignora espaços consecutivos
      while (str[i] == ' ') {
        i++;
      }
    }
  }

  // Adiciona o terminador nulo ao final
  str[j] = '\0';
  printf("%s\n", str);
}

// count lines in input
void count_lines() {
  int c1, nl;

  nl = 0;
  while ((c1 = getchar()) != EOF)
    if (c1 == '\n')
      ++nl;

  printf("%d\n", nl);
}

// Character Counting
void put_input() {
  long nc;
  nc = 0;

  while (getchar() != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);
}

void count_formats() {
  int c, bl, tb, nl;

  bl, tb, nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
    if (c == '\t') {
      ++tb;
    }
    if (c == ' ') {
      ++bl;
    }
  }

  printf("%d, %d, %d\n", nl, tb, bl);
}

// other way to count chars
void count_chars() {
  double nc1;

  for (nc1 = 0; getchar() != EOF; ++nc1)
    ;

  printf("%.0f\n\n", nc1);
}

void print_line(int number_of_lines, char *position, char *title) {
  if (strcmp(position, "init") == 0) {
    printf("%s", title);
    for (int i = 0; i < 25; i++) {
      printf("-");
    }
    for (int i = 0; i < 25; i++) {
      printf("-");
    }
    printf("\n");
  } else if (strcmp(position, "mid") == 0) {
    for (int i = 0; i < 25; i++) {
      printf("-");
    }
    printf("%s", title);
    for (int i = 0; i < 25; i++) {
      printf("-");
    }
    printf("\n");
  } else {
    for (int i = 0; i < 25; i++) {
      printf("-");
    }
    for (int i = 0; i < 25; i++) {
      printf("-");
    }
    printf("%s", title);
    printf("\n");
  }
}
