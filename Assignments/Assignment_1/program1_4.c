/*
    Author : Om Badsha Khokad
    Date : 10/04/2023
    Program : Write a program which accept number from user and check whether that number is divisible by 5 or not.

*/
#include<stdio.h>
#include<stdlib.h>
 typedef int BOOL;
 #define FALSE 0
 #define TRUE 1

 BOOL Check(int iNo)
 {
     if(iNo % 5 == 0)
     {
         return TRUE;
     }
     else
     {
         return FALSE;
     }
 }

int main()
{
    int iValue =0;
    BOOL bRet=FALSE;
    printf("Enter number\n");
    scanf("%d", &iValue);
   
    bRet=Check(iValue);

    if(bRet==TRUE)
    {
        printf("Dvisible by 5");

    }
    else
    {
        printf("Not Divisible by 5");
    }
    return EXIT_SUCCESS;

}

