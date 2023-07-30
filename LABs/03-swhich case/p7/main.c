#include<stdio.h>

void main(void)
{
	unsigned int num,num_shift,direction,new_num,num_bits;   //Define Variables 
	
	printf("enter the number:");
	scanf(" %d",&num);  // To take Num From User 
	
	printf("enter the value of shifting:");
	scanf(" %d",&num_shift);  //To take Number Of Shifting 
	
	printf("if direction right=0 or lift=1 ");
	printf("\n enter the direction of shifting:");
	scanf(" %d",&direction); // to take Direction 
	switch(direction)   //to make Switch case of direction 
	{
	case 0:   //if direction equal 0 This case Will Exquet
	new_num=(num>>num_shift)|(num<<8-num_shift);
	break;
	case 1:   //if direction equal 1 This case Will Exquet
	new_num=(num<<num_shift)|(num>>8-num_shift);
	break;
	}
printf("number after shifting:%d",new_num);
   
}    
	