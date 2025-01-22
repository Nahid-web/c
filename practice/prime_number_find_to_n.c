/*
? Prime Number
  A Prime Number is a number greater than 1 that has no divisors other than 1
  and itself. In other words, it is a number that is not divisible by any
  number other than 1 and itself.

* Properties of Prime Numbers
  - A prime number is greater than 1.
  - It has exactly two distinct positive divisors: 1 and itself.
  - The smallest prime number is 2 (and it's also the only even prime number).
  - All other even numbers greater than 2 are not prime because they are
    divisible by 2.
*/

//? Find Prime Number 1 to N

#include <stdio.h>

int is_prime(int n) {
  if (n <= 1)
    return 0; // n<=1 is not prime number

  for (int i = 2; i * i < n; i++) {
    if (n % i == 0)
      return 0; // found a divisor
  }
  return 1; // prime number
}

int main() {

  int n, isPrime = 1;

  // Input: Prompt user for Upper Limit
  printf("Enter Upper Limit : \n");
  scanf("%d", &n);

  printf("Prime Number between 1 to %d\n", n);
  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}