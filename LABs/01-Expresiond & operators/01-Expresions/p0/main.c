#include <stdio.h>
 void main()
{
int a, b, c, d;
float ratio;

printf("Enter integer value one\n"); 
scanf("%d", &a);
printf("Enter  integer value two\n");
scanf("%d", &b);
printf("Enter  integer value three\n");
scanf("%d", &c);
printf("Enter  integer value four\n");
scanf("%d",&d);
if (c-d != 0) // Execute statement block
{
ratio = (float)(a+b)/(float)(c-d);
printf("Ratio = %f\n", ratio); // to Print Ratio 
}
}