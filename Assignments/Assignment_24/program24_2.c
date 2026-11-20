/*
   Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and accept one character .Return Frequency of that character.

  Input:"Marvellous Multi OS"
         M
  Output:2

*/
#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCnt=0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
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

    iRet = CountChar(Arr,cValue);

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