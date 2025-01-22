
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

//? Check if a number is a prime number

#include <stdio.h>

int main() {

  int n, isPrime = 1;

  // Input: Prompt user input a number
  printf("Enter Your Number\n");
  scanf("%d", &n);
  if (n <= 1) {
    printf("%d is not prime number \n", n);
  }

  // Check divisors from 2 to sqrt(n) (optimization possible here)
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      isPrime = 0; // found divisor , so it's not prime number
      break;
    }
  }

  // output the result
  if (isPrime) {
    printf("%d is prime  number\n", n);
  } else {
    printf("%d is not prime number\n", n);
  }
  return 0;
}
