//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//                                                                              //
//  Application Name:  Check Even or Odd                                        //
//  Input: Integer                                                              //
//  Output: Boolean                                                             //
//  Description:  Check whether the given number is even or odd                 //
//  Date: 09/10/26                                                              //
//  Name: Om Badsha Khokad                                                      //
//////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
   if((iNo % 2) ==0)
   {
      return true;
   }
   else
   {
     return false;
   }
}


int main()
{
   int iValue=0;
   bool bRet=false;

   printf("Enter number:\n");
   scanf("%d",&iValue);

   bRet= CheckEven(iValue);

   if(bRet == true)
   {
      printf("it is even:\n");
   }
   else
   {
       printf("it is odd:\n");
   }

    return EXIT_SUCCESS;
}