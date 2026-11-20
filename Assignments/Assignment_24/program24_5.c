/*
    Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and reverse the string

  Input: "abcd"
  Output:"dcba"

*/


#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }

    str--;

    while(iCnt > 0)
    {
        printf("%c",*str);
        str--;
        iCnt--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter a string: ");
    scanf("%[^\n]",Arr);

    printf("Reversed string is: ");
    Reverse(Arr);

    return 0;
}