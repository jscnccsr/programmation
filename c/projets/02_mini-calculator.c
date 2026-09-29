/*
 * Build a calculator that accepts two numbers and an operation.
*/

#include <stdio.h>

int main() {

  float fnumber = 0;
  float snumber = 0;
  float result  = 0;
  char operator;
  
  printf("Enter first number: ");
  scanf("%f", &fnumber);
  printf("Enter operator: ");
  scanf(" %c", &operator);
  printf("Enter second number: ");
  scanf("%f", &snumber);

  if (operator == '+') {
    result = fnumber + snumber;
  }
  else if (operator == '-') {
    result = fnumber - snumber;
  }
  else if (operator == '*') {
    result = fnumber * snumber;
  }
  else if (operator == '/') {
    if (snumber == 0) {
      printf("Division by zero error.\n");
      return 0;
    }
    result = fnumber / snumber;
  }
  else if (operator == '%') {
    result = (int)fnumber % (int)snumber;
  }
  printf("Result: %f\n", result);
}
