#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char from[], char to[]);

int longest_line() {
  int len;               /* current line length */
  int max;               /* maximum length seen so far */
  char line[MAXLINE];    /* current input file */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = get_line(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(line, longest);
    }

  if (max > 0) /*there was a line*/
    printf("%s", longest);

  return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char from[], char to[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
