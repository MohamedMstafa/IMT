#include <stdio.h>


int main()
{
    char text1[100], text2[100];
    char * str1 = text1;
    char * str2 = text2;
    int i;	
    
    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",text1);
    
    /* Copy text1 to text2 character by character */
    for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

    return 0;
}