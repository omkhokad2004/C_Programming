/*
    Author : Om Badsha Khokad
    Date : 18/10/2026
    Program : Write a program to print 5 to 1 on screen using while loop.
*/
#include<stdio.h>
#include<stdlib.h>

int Display()
{
    int i=0;
       i=5;

     while(i>0)
     {
        printf("%d",i);
        i--;
     }
    
}

int main()
{
    Display();

    return EXIT_SUCCESS;

}
