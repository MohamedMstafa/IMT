#include<stdio.h>
void main (void)
{
	int i ;
	char array[20]={1,3,5,7,9,11,13,15,17,19} ;
	char array2[10]={2,4,6,8,10,12,14,16,18,20} ;
	for(i=9;i>=0;i--)
	{
		array[i*2]=array[i] ;
		array[(i*2)+1]=array2[i] ;
	}
	for(i=0;i<20;i++)
	{
		printf("%d ",array[i]);
	}	
}