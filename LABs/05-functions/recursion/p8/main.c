#include <stdio.h>
void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence(); // call function

    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);

    if( c != '\n') 
    {
        reverseSentence(); // call function till the user press enter
        printf("%c",c);  // print characters inreverse
    }
}