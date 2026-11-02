/*
   Author: Om Badsha Khokad
   Date:02/11/26
   Problem Statement: Write a program which accept distance in kilometer and convert it into meter. (1 kilometer = 1000 meter)

    Input: 5
    Output:5000


*/

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
   int imeter=0;
   imeter=iNo*1000;
   return imeter;
   
}
int main()
{
    int iValue=0, iRet=0;

    printf("Enter distance");
    scanf("%d",iValue);

    iRet=KMtoMeter(iValue);

    printf("Kilometer to meter is :%d\n",iRet);

    return EXIT_SUCCESS;
}