/*
    Author:Om Badsha Khokad
    Date:04/11/26
    Problem Statement : Write a program which Accept number from user and return multiplication of all digits.


*/
#include<stdio.h>
#include<stdlib.h>

int Range(int iStart ,int iEnd)
{
    int iCnt=0;
   int iMultiple=0;

   for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   {
   
      iMultiple =iMultiple * iCnt;
    
   }
  return iMultiple;
}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet=Range(iValue1,iValue2);

    printf("Multiplication of all number in between the range is:%d",iRet);

    return EXIT_SUCCESS;
}