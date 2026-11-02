/*
   Author: Om Badsha Khokad
   Date:02/11/26
   Problem Statement: Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

    Input: 5
    Output:0.464515
*/


#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dmeter=0.0;
    dmeter= iValue*0.0929;

    return dmeter;

}

int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet=SqaureMeter(iValue);

    printf("Area in square meter is %lf",dRet);

    return EXIT_SUCCESS;
}