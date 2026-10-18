/*
   Author:Om Badsha Khokad
    Date : 10/04/2023
    Program: Accept two numbers from user and display first number of second number of times on screen.

    Input:12 5
    Output: 12 12 12 12 12
      
    Input: -2  3
    Output: -2 -2 -2

    Input: 21 -3
    Output: 21 21 21

    Input: -2  0
    Output: 

*/
#include<stdio.h>
#include<stdlib.h>
 void Display(int iNo,int ifrequency)
 {
    int iNo=0;
    for(int iCnt=1;iCnt<=ifrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
 }
  
int main()
{
   int iValue=0;
   int iCount=0;
   
   printf("Enter number");
   scanf("%d",&iValue);

   printf("Enter frequency");
   scanf("%d",&iCount);

   Display(iValue,iCount);


    return EXIT_SUCCESS;
}