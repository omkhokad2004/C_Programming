/*
   Author:Om Badsha Khokad
   Date:05/11/26
   Problem Statement: Write a program which accept total marks and obtained marks from user and calculate its percentage.

*/
#include<stdio.h>
#include<stdlib.h>
float Percentage(float iNo1,float iNo2)
{
    float Percentage=0;

    float fPercentage= iNo1 / iNo2 ;
    
    if(iNo1==0)
    {
        printf("Error");
    }
}
int main()
{
   int iValue1=0,iValue2=0;
   float fRet=0.0;

   printf("Please enter total marks");
   scanf("%d",&iValue1);

   printf("Please enter obtained marks");
   scanf("%d",&iValue2);

   fRet=Percentage(iValue1,iValue2);

   printf("Percentage is:",fRet);

    return EXIT_SUCCESS;
}