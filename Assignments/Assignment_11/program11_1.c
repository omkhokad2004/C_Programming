/*
   Author:Om Badsha Khokad
   Date:04/11/26
   Problem Statement:Write aprogram which accepts range fromuser and Display all numbers in between that range.



*/
#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart ,int iEnd)
{
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d",iCnt);
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}