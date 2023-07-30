#include <stdio.h>
int main()
{
    float firstNumber, secondNumber, result;
    printf("Enter the first number: ");

    // Stores the first floating number in variable firstNumber  
    scanf("%f", &firstNumber);  

  printf("Enter the second number: ");

// Stores the second floating number in variable secondNumber  
   scanf("%f", &secondNumber); 

    // Performs multiplication and stores the result in variable result OfTwoNumbers
    result = firstNumber * secondNumber;  

    // Result up to 2 decimal point is displayed using %.2f
    printf("result = %.2f", result);
    
    return 0;
}