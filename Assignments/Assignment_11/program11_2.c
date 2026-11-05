/*
   Author:Om Badsha Khokad
   Date:05/11/26
   Problem Statement:Write a program which accepts from user and display all even number in between that range.


*/
#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart ,int iEnd)
{
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
        printf("%d",iCnt);
        }
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}