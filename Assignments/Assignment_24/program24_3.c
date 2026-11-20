/*
    Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and accept one character. Return index of first occurance of that character

  

*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }

        iCnt++;
        str++;
    }

    return -1;
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

    iRet = FirstOcc(Arr,cValue);

    if(iRet == -1)
    {
        printf("Character is not present\n");
    }
    else
    {
        printf("First occurrence index is: %d\n",iRet);
    }

    return 0;
}