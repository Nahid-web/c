#include <stdio.h>

int fun1() {
  printf("Nahid\n");
  return 1;
}

int fun2() {
  printf("Amin\n");
  return 1;
}

int main() {
  int a;
  a = fun1() + fun2();
  printf(" %d\n", a);
  return 0;
}
