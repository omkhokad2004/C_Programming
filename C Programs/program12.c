#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name: ReturnValue
// Input        : Integer,Integer
// Output       : Integer
// Description  : Get return value of scanf function
// Date         : 09/10/26
// Author       : Om Badsha Khokad
//
////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
   
   int no=0;

   printf("Enter number :\n");
   if( scanf("%d",&no)!=1)
   {
    fprintf(stderr, "Invalid input. Please enter a valid integer.\n");

    return EXIT_FAILURE;
   }
   
    printf("Input is valid \n");


    return EXIT_SUCCESS;
}