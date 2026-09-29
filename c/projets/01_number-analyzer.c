/*
Write a program that reads an integer and tells the user some properties about it.
*/

#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  char affirm[] = "Yes";
  char negate[] = "No";

  printf("\nNumber: %d.\n", number);

  if (number % 2 == 0) {
    printf("Even: %s.\n", affirm);
  }
  else {
    printf("Even: %s.\n", negate);
  }

  if (number > 0) {
    printf("Positive: %s.\n", affirm);
  }
  else if (number < 0) {
    printf("Positive: %s.\n", negate);
  }
  else {
    printf("Number is zero: %s.\n", affirm);
  }

  if (number < 10) {
    printf("Less than 10: %s.\n", affirm);
  }
  else if (number > 10) {
    printf("Greater than 10: %s.\n", affirm);
  }
  else {
    printf("Equal to 10: %s.\n", affirm);
  }
  return 0;
}
