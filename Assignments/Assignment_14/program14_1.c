/*
   Author: Om Badsha Khokad
   Date: 04/11/26
   Problem Statement: Write a program which accept number from user and display its multiplication of factors.
   
   Input:12
   Output:144 (1*2*3*4*6)

*/
#include<stdio.h>
#include<stdlib.h>
int MultFact(int iNo)
{
    int iCnt=0;
    int iMult=1;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMult=iMult*iCnt;
        }

    }
    return iMult;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    return EXIT_SUCCESS;
}