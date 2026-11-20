/*
  Name:Om Badsha Khokad
  Date: 20/11/26
  Problem Statement:Accept character from user and check whether it is digit or not

  Input:234
  Output: True


*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char No)
{
    if((No>='0'&& No<='9'))
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

    bRet=ChkDigit(cValue);
    if(bRet==TRUE)
    {
        printf("It is Digit");
    }
    else{
         printf("It is not Digit");
    }
  return EXIT_SUCCESS;
}