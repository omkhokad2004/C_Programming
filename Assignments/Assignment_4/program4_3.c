/*
   Author: Om Badsha Khokad
   Date: 21/10/26
   Problem Statement:Accept two integer and determine which number is greater.If both numbers are equal,
   display an appropiate message.
   
   Input: 10   20  ---> 20 is Greater
   Input: 50   30  ---> 50 is Greater
   Input: 15   15  ---> Both are Equal

*/
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst,int iSecond)
{
    if(iFirst > iSecond)
    {
        printf(" %d is greater",iFirst);

    }
    else if(iFirst < iSecond)
    {
         printf(" %d is greater",iSecond);

    }
    else{
        printf("Equal");
    }

}
int main()
{
    int iValue1 =0;
    int iValue2 = 0;

    printf("Enter two numbers :");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}
