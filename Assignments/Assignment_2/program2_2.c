/*
    Author: Om Badsha Khokad
    Date : 10/04/2023
    Program: Accept one number from user and print that number of(*) on screen.

*/
#include<stdio.h>
#include<stdlib.h>

void display(iNo)
{
    while(iNo> 0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
     int iValue=0;
     printf("Enter a number");
     scanf("%d",&iValue);

     display(iValue);

    return EXIT_SUCCESS;
}