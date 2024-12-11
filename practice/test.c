#include <stdio.h>

int main() {
  int a = 6, b = 3;
  int incr;
  incr = (a < b) || (b++);
  printf(" %d\n", incr);
  printf(" %d\n", b);
  return 0;
}
