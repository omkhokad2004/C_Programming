/*
   Author: Om Badsha Khokad
   Date: 22/10/26
   Problem Statement:Accept a year from yser and determine whether it is a leap year according to Geogorian calendar rules. A year is a leap year if it is divisible by 400 or divisible by 4 but not by 100. Consider year less than or eqaul to zero invalid.

   Input: 2024 --> Leap year
   Input: 1900 --> Not a Leap year
   Input: 2000 --> Leap year
    
 */
#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear<=0)
    {
        printf("Invalid");

    }
    else if ((iYear %400==0) || (iYear %4==0 && iYear % 100 !=0))
    {
        printf("Leap Year");

    }
    else{
        printf("Not a Leap year");
    }

}

int main()
{
   int iYear=0;

   printf("Enter Year:");
   scanf("%d",&iYear);

   CheckLeapYear(iYear);



    return EXIT_SUCCESS;
    
}