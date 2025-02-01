#include <stdio.h>

// Simple function to find factorial
// Example: if n=4, returns 4*3*2*1 = 24
int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }
  return fact;
}

// Check if number is strong number
// Example: 145 = 1! + 4! + 5!
void checkStrong(int num) {
  int temp = num;
  
  int sum = 0;

  // Get each digit and add its factorial to sum
  while (temp != 0) {
    int digit = temp % 10;  // Get last digit
    sum = sum + factorial(digit);
    temp = temp / 10;  // Remove last digit
  }

  // If sum equals original number, it's a strong number
  if (sum == num) {
    printf("%d is a Strong number\n", num);
  } else {
    printf("%d is not a Strong number\n", num);
  }
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  checkStrong(num);

  return 0;
}
