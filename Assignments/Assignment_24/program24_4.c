/*
    Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and accept one character. Return index of last occurance of that character
   
   Input: "Marvellous Multi OS"
          W
   Output:-1

*/

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCnt;
        }
        iCnt++;
        str++;
    }

    return iIndex;
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

    iRet = LastChar(Arr,cValue);

    printf("Last occurrence index is: %d\n",iRet);

    return 0;
}