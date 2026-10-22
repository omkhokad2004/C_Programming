/*
   Author: Om Badsha Khokad
   Date: 22/10/26
   Problem statement: Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only5, or niether.
*/
#include<stdio.h>
#include<stdlib.h>
void CheckMultipleDivisibility (int iValue)
{
   if(iValue % 3==0 && iValue % 5==0)
   {
    printf("Divisible by both");
   }
   else if(iValue %3==0)
   {
    printf("Divisible by 3 only");
   }
   else if(iValue %5==0)
   {
    printf("Divisible by 5 only");
   }
   else 
   {
    printf("Divisible by either");
   }

}
int main()
{
   int iValue=0;
   printf("Enter Number:");
   scanf("%d",&iValue);

   CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}