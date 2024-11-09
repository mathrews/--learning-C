int power(int base, int y) {
  int i, p;

  p = 1;
  for (i = 1; i <= y; ++i) {
    p = p * base;
  }
  return p;
}
