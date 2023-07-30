#include <stdio.h>
int main()
{
      int firstNumber, secondNumber;

      printf("Enter first number: ");
      scanf("%d", &firstNumber);

      printf("Enter second number: ");
      scanf("%d",&secondNumber);

      // the new Value of firstNumber is sum the firstNumber and the secondNumber 
      firstNumber = firstNumber+secondNumber;

      //  Value of secondNumber after swapping is subtraction the new Value of firstNumber and the secondNumber 
      secondNumber = firstNumber-secondNumber;

      // Value of firstNumber after swapping is subtraction the new Value of firstNumber and the  value of secondNumber after swapping
      firstNumber = firstNumber-secondNumber;
      printf("\n ......After swapping...... ");
      printf("\nfirstNumber = %d\n", firstNumber);
      printf("secondNumber = %d", secondNumber);

      return 0;
}