/*
   Author: Om Badsha Khokad
   Date:31/10/26
   Problem Statement: Write a program which return diff. betn even factorial and odd factorial of given number
   
   Input: 5
   Output: -7
*/
#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int Difference(int iNo)
{
    int iEven = 0;
    int iOdd = 0;

    iEven = EvenFactorial(iNo);
    iOdd = OddFactorial(iNo);

    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    if(iValue < 0)
    {
        printf("Invalid input");
    }
    else
    {
        iRet = Difference(iValue);

        printf("Difference is %d", iRet);
    }

    return EXIT_SUCCESS;
}