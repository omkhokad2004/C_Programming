/*
   Author: Om Badsha Khokad
   Date : 18/10/2026
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
