/*
   Author- Om Badsha Khokad
   Date-30/10/26
   Problem Statement- Wtrite a program which accept number from user and print that number of $ * on screen

   Input: 3
   Output:$ * $ * $ *
*/

#include<stdio.h>
#include<stdlib.h>
void Pattern (int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<= iNo;iCnt++)
    {
        printf(" $  *  \t");
    }
    printf("\n");

}
int main()
{
   int iValue=0;
   printf("Enter number");
   scanf("%d",&iValue);

   Pattern(iValue);


    return EXIT_SUCCESS;
}