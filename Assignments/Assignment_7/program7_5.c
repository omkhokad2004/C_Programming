/*
   Author: Om Badsha Khokad
   Date:30/10/26
   Problem Statement:Write a program which accept N from user and display all odd number up to N.
   
   Input: 18
   Output: 1 3 5 7 9 11 13

*/

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;
   for(iCnt=1;iCnt=iNo;iCnt++)
   {
      printf("%d",iNo * 2);
   } 

}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);

    return EXIT_SUCCESS;

}