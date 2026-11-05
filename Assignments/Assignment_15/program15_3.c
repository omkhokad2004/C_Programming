/*
    Author:Om Badsha Khokad
    Date:04/11/26
    Problem Statement : Write a program which Accept two number from user and check whether numbers are equal or not.


*/
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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
   int iValue1=0,iValue2=0;
   BOOL bRet =FALSE;

   printf("Please enter two number");
   scanf("%d %d",&iValue1,&iValue2);

   bRet=ChkEqual(iValue1,iValue2);

   if(iValue1==iValue2)
   {
    printf("Equal");
   }
   else{
    printf("Not Equal");
   }

    return EXIT_SUCCESS;
}
