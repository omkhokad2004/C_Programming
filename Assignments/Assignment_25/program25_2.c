/*
  Name:Om Badsha Khokad
  Date: 20/11/26
  Problem Statement:Accept character from user and check whether it is capital or not

  Input:F
  Output: True


*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch>='A'&& ch<='Z'))
    {
        return TRUE;
    }
    else{
        return FALSE;
    }

}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the character");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);
    if(bRet==TRUE)
    {
        printf("It is  Capital Character");
    }
    else{
         printf("It is not capital Character");
    }
  return EXIT_SUCCESS;
}