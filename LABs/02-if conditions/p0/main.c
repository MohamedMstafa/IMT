#include <stdio.h>
int main()
{
    char c ;
    int x, y;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

	
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') // to chek Alphabets 

        printf("%c is a vowel.", c);   // To print Vowel 
    else
        printf("%c is a consonant.", c);  //  To Print Constant 

  return 0;
}