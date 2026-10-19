/*
    Author: Om Badsha Khokad
    Date : 10/04/2023
    Program: Write a program which accept one number from user and print that number of even numbers on screen.

     Input: 7
     Output: 2   4    6    8   12   14


*/
#include<stdio.h>
#include<stdlib.h>


void PrintEven(int iNo)
{
    
 for(int iCnt=1;iCnt<=iNo;iCnt++)
        
       {
        printf("%d\t",2*iCnt);
         }
    }
    

int main()
{
    int iValue=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
     
    PrintEven(iValue);

    return EXIT_SUCCESS;
}