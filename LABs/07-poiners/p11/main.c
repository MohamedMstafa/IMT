#include <stdio.h>


int main()
{
    char str[100], reverse[100];
    char *s = str;
    char *r = reverse;
    int len = 0;

    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",str);

    /* Find length of string */
    while(*(s++))
	{
		len++;
	}
		
    /* 
     * Store each character from end of original string 
     * to reverse string
     */
    s--;
    while(len >= 0)
    {
        *(r++) = *(--s);
        len--;
    }
 
    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", reverse);

    return 0;
}