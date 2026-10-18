/*
   Author: [Your Name]
   Date : 10/04/2023
   Program : Accept one number from user and print that number of(*) on screen.
*/
#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
  {
    int iCnt =0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
  }


int main()
{
    int ivalue=0;

    printf("Enter a number: \n");
    scanf("%d",&ivalue);
    Accept(ivalue);


    return EXIT_SUCCESS;

}