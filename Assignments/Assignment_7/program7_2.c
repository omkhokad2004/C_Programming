/*
   Author: Om Badsha Khokad
   Date:30/10/26
   Problem Statement:Write aprogram which accept number from user and display number till that number.
   
   Input: 8
   Output: 1 2 3 4 5 6 7 8 

*/


#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d ",iCnt);
    }

}
int main()
{
    int iValue=0;
    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;

}