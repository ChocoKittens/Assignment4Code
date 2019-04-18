#include <stdio.h>

int runChosenOperation(char chosenOperation, int numberOne, int numberTwo) {
  if(chosenOperation == '+') {
      printf("The sum is %d\n", add(numberOne, numberTwo));
    }
	else if(chosenOperation == '-') {
      printf("The difference is %d\n", subtract(numberOne, numberTwo));
    }
    else if(chosenOperation == '*') {
      printf("The product is %d\n", multiply(numberOne, numberTwo));
    }
    else {
      if(numberTwo != 0) {
		printf("The quotient is %d\n", divide(numberOne, numberTwo));
      }
      else {
		printf("The quotient is undefined\n");
      }
    }
}

int add(int augend, int addend) {
  return augend + addend;
}

int subtract(int minuend, int subtrahend) {
  return minuend - subtrahend;
}

int multiply(int multiplicand, int multiplier) {
  return multiplicand * multiplier;
}

int divide(int dividend, int divisor) {
  return dividend / divisor;
}

int main() {
  int numberOne, numberTwo;
  char chosenOperation, doAgain;
  do {
    printf("Choose an operation (+ - * /): ");
    scanf(" %c", &chosenOperation);

    printf("Enter a number: \n");
    scanf("%d", &numberOne);
    printf("Enter a second number: \n");
    scanf("%d", &numberTwo);
    
    //Function decides which arithmetic function to use depending on what the user specified as their chosen reaction
    runChosenOperation(chosenOperation, numberOne, numberTwo);
    
    printf("Would you like to continue (y/n): \n");
    scanf(" %c", &doAgain);
  }
  while(doAgain == 'Y' || doAgain == 'y');
}
