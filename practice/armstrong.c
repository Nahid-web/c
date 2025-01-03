

// * simple method to find armstrong number
/*
#include <stdio.h>

int main() {
  int number, count = 0, result = 0, rem, cnt, mul = 1;

  printf("Enter Your Number\n");
  scanf("%d", &number);

  // count the digit
  int q = number;
  while (q != 0) {
    q = q / 10;
    count++;
  }

  // sum numbers after multiplication with order of number
  q = number;
  cnt = count;
  while (q != 0) {
    rem = q % 10;
    while (cnt != 0) {
      mul = mul * rem;
      cnt--;
    }
    result = result + mul;
    cnt = count;
    q = q / 10;
    mul = 1;
  }

  if (result == number) {
    printf("%d is Armstrong Number \n", number);
  } else {
    printf("%d is not Armstrong Number\n", number);
  }
  return 0;
}
*/

//* using pow fuction to multiple number according to order

/* #include <math.h>
#include <stdio.h>

int main() {
  int number, result = 0, count = 0, rem;

  printf("Enter Your Number\n");
  scanf("%d", &number);

  // count the digit
  int q = number;
  while (q != 0) {
    q = q / 10;
    count++;
  }

  // sum numbers after multiplication with order of number
  q = number;

  while (q != 0) {
    rem = q % 10;

    result = result + pow(rem, count);

    q = q / 10;
  }
  if (result == number) {
    printf("%d is Armstrong Number \n", number);
  } else {
    printf("%d is not Armstrong Number\n", number);
  }
  return 0;
} */

//* using function

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// function to count the number of digit
int counterNumber(int number) {
  int count = 0;
  while (number != 0) {
    number = number / 10;
    count++;
  }
  return count;
}

// function to calculate the  sum of digit raised to a power

int calculateSum(int numer, int power) {
  int sum = 0, rem;
  while (numer != 0) {
    rem = numer % 10;
    sum = sum + pow(rem, power);
    numer = numer / 10;
  }
  return sum;
}

// function to check if a number is as an Armstrong number
bool isArmstrongNumber(int number) {
  int numberDigit = counterNumber(number);
  int sum = calculateSum(number, numberDigit);
  return sum == number;
}

//main function
int main() {
  int num;
  printf("Enter any Number\n");
  scanf("%d", &num);
  printf("%d is an armstrong number : %s\n", num,
         isArmstrongNumber(num) ? "yes" : "No");
  return 0;
}