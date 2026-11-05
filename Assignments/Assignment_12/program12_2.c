/*
    Author:Om Badsha Khokad
    Date:04/11/26
    Problem Statement : Write a program which Accept number from user and check whether it contains 0 in it or not.

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    if(iNo==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);
    if(bRet==TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}