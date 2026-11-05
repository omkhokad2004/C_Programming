/*
    Author:Om Badsha Khokad
    Date:04/11/26
    Problem Statement : Write a program which Accept number from user and return count of odd digits .



*/

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int iNo)
{
    int iDigit=0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
while(iNo>0)
{
    iDigit=iNo%10;
    if((iDigit%2)!=0)
    {
        iCount++;
    }
    iNo=iNo/10;

}
 return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}