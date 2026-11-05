/*
    Author:Om Badsha Khokad
    Date:04/11/26
    Problem Statement : Write a program which Accept Starting range from user and return addition of all even number in between that range.


*/

#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart ,int iEnd)
{
    int iCnt=0;
   int iSum=0;

   for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   {
    if(iCnt%2==0)
    {
      iSum =iSum + iCnt;
    }
   }
  return iSum;
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);

    printf("Addition of all number in between the range is:%d",iRet);

    return EXIT_SUCCESS;
}