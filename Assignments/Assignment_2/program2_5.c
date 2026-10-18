/*
  Author: Om Badsha Khokad
  Date : 10/04/2023
  Program: Accept number from user and check whether number is even or odd.

*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
 typedef int BOOL;
BOOL CheckEvenOdd(int iNo)
{
    if(iNo %2==0)
    {
        printf("Number is even");

    }
    else{

    printf("Number is odd");
    }
    return iNo;
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
