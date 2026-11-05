/*
    Author: Om Badsha Khokad
    Date: 04/11/26
    Problem Statement: Write a program which accept number from user and return diff. bet. summation of all its factors and non factores.

*/
#include<stdio.h>
#include<stdlib.h>

int SumDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = SumDiff(iValue);

    printf("Difference is: %d\n", iRet);

    return EXIT_SUCCESS;
}
