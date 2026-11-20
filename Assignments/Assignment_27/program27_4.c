/*
  Name:Om Badsha Khokad
  Date: 20/11/26
  Problem Statement:Write a program which accept string from user and check whether it contains vowels in it or not

  Input:"Demo"
  Output:True
*/
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return EXIT_SUCCESS;
}