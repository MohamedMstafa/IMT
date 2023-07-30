#include <stdio.h>
int main()
{
	int number1,number2, div=0,rem=0;   // define variables 
	
	printf("Please Enter number 1: "); 
	scanf("%d",&number1);           //to take the 1 value                  
	
	printf("Pleae Enter number 2:  ");
	scanf("%d",&number2);            //to take the 2 value       
	  div=number1/number2;   // to make divisio
	  rem=number1%number2;   // to make reminder
	printf("the division = %d\n",div);   // to print the Result of division 
	printf("the reminder = %d",rem);     // to print the Result of reminder 
	return 0;
}