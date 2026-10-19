/*
   Author: Om Badsha Khokad
    Date : 18/10/2026
    Program: Write a program which accept one number from user and if number is less than 10 then print "Hello" otherwise print "Demo" on screen.

*/
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);
   
     Display(iValue);
    return EXIT_SUCCESS;
}
