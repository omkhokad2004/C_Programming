/*
   Author:Om Badsha Khokad
   Date:05/11/26
   Problem Statement: Write a program which accept one number from user and check whether the given number is greater than 100 or not. 


*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0 
BOOL ChkGreater(int iNo)
{
  if(iNo>100)
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
    printf("Please enter number");
    scanf("%d",&iValue);
    
    bRet= ChkGreater(iValue);
    if(iValue>100)
    {
      printf("Greater");
    }
    else
    {
        printf("Smaller");
    }


    return EXIT_SUCCESS;
}

