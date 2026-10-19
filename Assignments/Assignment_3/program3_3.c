/*
    Author: Om Badsha Khokad
   Date: 19/10/26
   Program: Write a program which accept number from user and print even factors of that numbers
   
   Input: 36
   Output:  2  6  12  18
    

*/
#include<stdio.h>
#include<stdlib.h>
void DisplayEvenFactror(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;

    }
    for (i=1;i<=iNo;i++);
    {
        if((iNo %i==0) &&(i % 2==0))
        {
            printf("%d",i);

        }
    }
}
int main()
{
     int iValue=0;
     printf("Enter number\n");
     scanf("%d",&iValue);
     DisplayEvenFactror(iValue);

    return EXIT_SUCCESS;
}