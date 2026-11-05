/*
    Author:Om Badsha Khokad
    Date:04/11/26
    Problem Statement : Write a program which Accept Starting range from user and return addition of all number in between that range.

*/
#include<stdio.h>
#include<stdlib.h>

int RangeDisplayReverse(int iStart ,int iEnd)
{
    int iCnt=0;
   int iSum=0;

   for(iCnt=iEnd;iCnt>=iStart;iCnt--)
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

    RangeDisplayReverse(iValue1,iValue2);

    return EXIT_SUCCESS;
}