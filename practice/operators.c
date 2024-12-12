#include <stdio.h>

int main() {

  /* int i = 5;
  int var = sizeof(i++);
  printf("%d %d\n", i, var); //5 4
  return 0; */

    int a = 1, b = 1;
    int c = ++a || b++;
    int d = b-- && --a;
    printf("%d %d %d %d\n", a, b, c, d);
  return 0;
}
