#include <stdio.h>

/* int main() {
  int i = -5;
  while (i <= 5) {
    if (i >= 0)
      break;
    else {
      i++;
      continue;
    };
    printf("Neso\n");
  }
  return 0;
} */

/* #include <stdio.h>

int main() {
  int i = 0;

  for (printf("one\n"); i < 3 && printf(""); i++) {
    printf("Hi!\n");
  }

  return 0;
} */

/* #include <stdio.h>

int main() {
  unsigned int i = 400;
  while (i++ != 0)
    ;
  printf("%d\n", i);
  return 0;
}
 */

#include <stdio.h>

int main() {
  int x = 3;
  if (x == 2)
    ;
  x = 0;
  if (x == 3)
    x++;
  else
    x += 2;

  printf("%d\n", x);
  return 0;
}