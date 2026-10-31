/*
   Author: Om Badsha Khokad
   Date:30/10/26
   Problem Statement:Write a program to find factorial of given number


*/

#include<stdio.h>
#include<stdlib.h>
int Factorial (int iNo)
{
    int iCnt=0;
    int fact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        fact= fact*1;
    }
    return fact;
}
int main()
{
   int iValue=0,iRet=0;

   printf("Enter number");
   scanf("%d",&iValue);

   iRet=Factorial(iValue);
   printf("Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}