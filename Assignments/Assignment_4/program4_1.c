/*
   Author: Om Badsha Khokad
   Date: 20/10/26
   Problem Statement: Write a C program that accepts integer from user and determines whether the entered number is positive ,negativeor zero.

*/
#include<stdio.h>
#include<stdlib.h>

void CheckNumber (int iValue)
{
    if(iValue >0)
    {
        printf("Number is positive");
    }
    else if (iValue<0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is zero");
    }
   
}

int main()
{
    int iValue =0;
    printf("enter a number:");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;

}