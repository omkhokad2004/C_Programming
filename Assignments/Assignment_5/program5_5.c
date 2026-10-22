/*
    Author:Om Badsha Khokad
    Date: 22/10/26
    Problem Statement:Accept a single character and determine whether it is uppercase alphabet, lowercase,alphabet,digit, or special character .Use character cpmparsions without using library character classification function.
*/
#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue<='Z')
    {
        printf("Uppercase Alphabet");
    }
    else if ((cValue >= 'a' && cValue<='z'))
    {
        printf("Lowercase Alphabet");
    }
    else if(cValue >= '0' && cValue<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
}
int main()
{
   char cValue='\0';

   printf("Enter a character:");
   scanf("%c",&cValue);

   CheckCharacterType(cValue);

    return EXIT_SUCCESS;

}