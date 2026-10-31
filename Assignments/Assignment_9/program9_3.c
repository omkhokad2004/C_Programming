/*
   Author: Om Badsha Khokad
   Date:31/10/26
   Problem Statement-Write a program to find even factorial of given number

*/
#include<stdio.h>
#include<stdlib.h>

int EvenFactorial (int iNo)
{
    int iCnt=0;
    int ifact=1;
    for(iCnt=2;iCnt<=iNo;iCnt=iCnt+2)
    {
        ifact= ifact*iCnt;
       
    }
    return ifact;
}
int main()
{
   int iValue=0,iRet=0;

   printf("Enter number");
   scanf("%d",&iValue);

   iRet=EvenFactorial(iValue);
   printf("Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}