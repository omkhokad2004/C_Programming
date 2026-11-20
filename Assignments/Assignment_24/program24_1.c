/*
   Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and accept one character check whether that character is present in string or not.

*/
#include<stdio.h>
#include<stdlib.h>

int ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
        }
        str++;
    }

    return 0;
}

int main()
{
    char Arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^\n]",Arr);

    printf("Enter a character: ");
    scanf(" %c",&cValue);

    iRet = ChkChar(Arr,cValue);

    if(iRet == 1)
    {
        printf("Character is present in string\n");
    }
    else
    {
        printf("Character is not present in string\n");
    }

    return 0;
}