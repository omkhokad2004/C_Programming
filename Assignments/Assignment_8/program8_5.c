/*
   Author: Om Badsha Khokad
   Date:30/10/26
   Problem Statement:Write a program which accept number from user and display its table in reverse order.
   
   Input:2
   Output: 20 18 16 14 12 10 8 6 4 2 
*/

#include<stdio.h>
#include<stdlib.h>
void Table(int iNo)
{ 
    int iCnt=0;

    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d*%d = %d\n",iNo,iCnt,iNo*iCnt);
    }
}
int main()
{
   int iValue=0;
   printf("Enter number");
   scanf("%d",&iValue);

   Table(iValue);

    return EXIT_SUCCESS;
}