/* #include <stdio.h>

int main() {
  int n, reverse = 0, remainder, quotient;
  printf("Please enter the number\n");
  scanf("%d", &n);

  quotient = n;
  while (quotient != 0) {
    remainder = quotient % 10;
    reverse = reverse * 10 + remainder;
    quotient = quotient / 10;
  }

  if (reverse == n) {
    printf("its palindrome\n");

  } else {
    printf("No! its not a palindrome\n");
  }
  return 0;
} */

// function to store reversed number
int reverseNumber(int n) {

  int reverse = 0, remainder, quotient;
  quotient = n;
  while (quotient > 0) {
    // extract the last digit
    remainder = quotient % 10;

    // append the digit to reversed number
    reverse = reverse * 10 + remainder;
    quotient = quotient / 10;
  }
  return reverse;
}

int isPalindrome(int n) {
  // negative numbers are not palindromes
  if (n < 0) {
    return 0;
  } else {

    return n == reverseNumber(n);
  }
}

#include <stdio.h>

int main() {
  int n;
  printf("Enter your number\n");
  scanf("%d", &n);

  if (isPalindrome(n)) {
    printf("%d is palindrome\n", n);
  } else {
    printf("% is not palindrome\n", n);
  }

  return 0;
}