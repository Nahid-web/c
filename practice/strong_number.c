/*
? What is a Strong Number in C?
A Strong number is defined as when the factorial of each digit of a number is
equal to the sum of the original number.

* Example 145 is a strong number.
First compute the factorial of each digit of the number
1! + 4! + 5! = 1 + 24 + 120 = 145
Since the number computer and the original number are the same then it is a
strong number.
*/

/*
? Algorithm to Check if a Number is a Strong Number or Not in C

    1. Take a number from the user and store it in a variable named "num" and
copy it in a temporary variable named "ori_num" we have stored it in another
variable to perform certain calculations.

    2. Now take a variable "sum=0" to store the sum of factorial of digits.

    3. Find the last digit of the num and store it in a variable named
"last_digit = num%10".

    4. Now find the factorial of last_digit and then store it in a variable
named "factorial".

    5. Now, add the factorial to the sum i.e. sum = sum + factorial.

    6. Remove the last digit from num because it will not be used further.

    7. Now repeat the above steps until num > 0.

    8. Check the condition for a strong number after the loop. The supplied
number is strong if sum == original; else, it is not
*/

// * Using Function

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

  // variable for input number, original number and sum of factorial
  int num, ori_num, sum = 0, last_digit;

  // Input: Prompt user enter a number
  printf("Enter Your Number: \n");
  scanf("%d", &num);

  // store the original number for comparision later
  ori_num = num;

  // Calculate the sum of factorials of digits of number
  while (num > 0) {
    last_digit = num % 10; // extact the last digit
    sum += factorial(last_digit);
    // add factorial of digit to the sum
    num /= 10; // remove the last digit from the number
  }

  // Check if sum of factorial of digits is equal to the original number
  if (ori_num == sum) {
    printf("%d is Strong Number  \n", ori_num);

  } else {
    printf("%d is Not Strong  Number \n", ori_num);
  }

  return 0;
}
