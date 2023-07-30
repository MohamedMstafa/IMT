#include <stdio.h>
 
void main()
{
    int n, i;
 
    printf("Enter size of array : ");
    scanf("%d", &n);
    int array[n-1];  
    printf("Enter elements into array : \n");
    for (i = 0; i < n-1 ; i++)
	{		
        scanf("%d", &array[i]);
	}
    for (i = 0; i < n - 1; i++)
	{
		if(array[i+1]!=array[i]+1)
		{
			printf("Missing element is : %d \n", array[i]+1);
			break;
		}
	}
}