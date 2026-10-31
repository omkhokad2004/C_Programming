/*
   Author: Om Badsha Khokad
   Date:30/10/26
   Problem Statement:Write a program which accept n from user and display all odd number up to n.
   
   Input: 18
   Output: 1 3 5 7 9 11 13


*/


#include<stdio.h>
#include<stdlib.h>
void OddDisplay(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2!=0)
        {
            printf("%d",iCnt);
        }
    }
}
int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;

}