/*
   Author: Om Badsha Khokad
   Date:31/10/26
   Problem Statement:Writea program which accept number from user and display below pattern

   Input:5
   Output: * * * * *  # # # # # #

*/

#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
   int iCnt=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      printf(" * ",iCnt);
      
   }
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      
      printf(" # ",iCnt);
   }
   printf("\t");
}
int main()
{
   int iValue=0;
   printf("Enter number");
   scanf("%d",&iValue);

   Display(iValue);

    return EXIT_SUCCESS;
}