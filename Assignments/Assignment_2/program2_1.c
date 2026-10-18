/*
   Author: Om Badsha Khokad
   Date : 10/04/2023
   Program: Accept one number from user and print that number of(*) on screen.

*/
#include<stdio.h>
#include<stdlib.h>

 void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt<=iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue =0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}