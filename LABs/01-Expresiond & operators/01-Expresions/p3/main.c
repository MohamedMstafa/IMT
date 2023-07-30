#include <stdio.h>
int main()
{
      int firstNumber, secondNumber, tempVariable;

      printf("Enter first number: ");
      scanf("%d", &firstNumber);

      printf("Enter second number: ");
      scanf("%d",&secondNumber);

      // Value of firstNumber is assigned to tempVariable
      tempVariable = firstNumber;

      // Value of secondNumber is assigned to firstNumber
      firstNumber = secondNumber;

      // Value of tempVariable (which contains the initial value of firstNumber) is assigned to secondNumber
      secondNumber = tempVariable;
      printf("\n ......After swapping...... ");
      printf("\nfirstNumber = %d\n", firstNumber);
      printf("secondNumber = %d", secondNumber);

      return 0;
}