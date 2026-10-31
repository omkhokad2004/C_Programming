/*
   Author: Om Badsha Khokad
   Date:30/10/26
   Problem Statement:Write aprogram which accept number from user and display its table.
   
   Input: 2
   Output: 2 4 6 8 10 12 14 16 18 20

*/

#include<stdio.h>
#include<stdlib.h>
void Table(int iNo)
{ 
    int iCnt=0;

    for(iCnt=1;iCnt<=10;iCnt++)
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