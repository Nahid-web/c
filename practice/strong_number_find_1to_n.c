#include <stdio.h>

/**
 * function to calculate the factorial of a number
 * @param n: The number whose factorial is to be calculated
 * @return: Factorial of n
 */

int factorial(int n) {
  int fact = 1;

  for (int i = 1; i <= n; i++) {
    fact *= i; // multiply current number to fact
  }

  return fact; // return the factorial
}

int main() {

  // variable for upper limit n
  int n;

  // Input: Prompt user enter upper limit
  printf("Enter Your Number: \n");
  scanf("%d", &n);

  // @Output: Message indicates the range being process
  printf("Strong Number between 1 to %d\n", n);

  // Iterate between 1 to n
  for (int i = 1; i <= n; i++) {
    int num = i;
    int sum = 0;

    // Calculate the sum of factorials of digits of number
    while (num > 0) {
      int digit = num % 10; // extact the last digit
      sum += factorial(digit);
      // add factorial of digit to the sum
      num /= 10; // remove the last digit from the number
    }

    // Check if sum of factorial of digits is equal to the original number
    if (i == sum) {
      printf("%d\n", i);
    }
  }

  return 0;
}
