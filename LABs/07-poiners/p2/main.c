# include <stdio.h>
void main ()
{
int array[10];
    int i, j, temp,count=0;
	int*ptr=array;
    printf("enter the element of an array \n");
    for (i = 0; i < 10; i++)
	{
       scanf("%d", &array[i]);
	}
 while (i>=0&&count==0)
 {
	 for (j = 0; j<=10; j++)
	 {
		 if(ptr[i]==array[j] && i!=j)
		 {
			count++;
			temp=array[j];
		 }
	 }
	 i--;
 }
 printf("this number %d is repeated %d times",temp,count);
} 